#include "CacheManager.h"

CacheManager::CacheManager(Memory *memory, Cache *cache)
{
    this->memory = memory;
    this->cache = cache;
    cache->set_block_size(this->block_size);
    this->set_num = cache->get_len() / this->cache_way;
    this->block_size_bit = (unsigned int)log2(this->block_size);
    this->index_bit = (unsigned int)log2(this->set_num);
    this->tag_bits = cache->get_machine_address_bit() - this->block_size_bit - this->index_bit;
    this->cache_line.resize(this->set_num, vector<unsigned int>(this->cache_way, 0));
    this->dirty.resize(this->set_num, vector<bool>(this->cache_way, false));
}

bool CacheManager::check_cache(unsigned int addr, unsigned int &way_num)
{
    unsigned int index = (addr >> this->block_size_bit) & ((1 << this->index_bit) - 1);
    unsigned int tag = addr >> (this->index_bit + this->block_size_bit);
    for (unsigned int i = 0; i < this->cache_way; ++i)
    {
        if (this->cache_line[index][i] == tag)
        {
            way_num = i;
            this->update_lru(index, i);
            return true;
        }
    }
    return false;
}

void CacheManager::update_lru(unsigned int index, unsigned int way_num)
{
    unsigned int key = index * this->cache_way + way_num;
    this->lru_map[key] = 0;
    for (auto &pair : this->lru_map)
    {
        if (pair.first != key)
        {
            pair.second++;
        }
    }
}

void CacheManager::prefetch(unsigned int addr)
{
    for (unsigned int i = 1; i <= 4; ++i)
    {
        unsigned int next_addr = addr + i * this->block_size;
        unsigned int way_num = 0xFF;
        bool hit = this->check_cache(next_addr, way_num);
        if (!hit)
        {
            unsigned int index = (next_addr >> this->block_size_bit) & ((1 << this->index_bit) - 1);
            unsigned int tag = next_addr >> (this->index_bit + this->block_size_bit);
            unsigned int lru_way = 0;
            for (unsigned int j = 1; j < this->cache_way; ++j)
            {
                if (this->lru_map[index * this->cache_way + j] > this->lru_map[index * this->cache_way + lru_way])
                {
                    lru_way = j;
                }
            }
            way_num = lru_way;
            unsigned int read_addr = ((tag << this->index_bit) | index) << this->block_size_bit;
            for (unsigned int k = 0; k < (*(this->cache))[way_num * this->set_num + index].len; ++k)
            {
                (*(this->cache))[way_num * this->set_num + index][k] = this->memory->read(read_addr | (k * 4));
            }
            this->cache_line[index][way_num] = tag;
            this->dirty[index][way_num] = false;
            this->update_lru(index, way_num);
        }
    }
}

unsigned int CacheManager::read(unsigned int addr)
{
    unsigned int way_num = 0xFF;
    bool hit = this->check_cache(addr, way_num);
    unsigned int index = (addr >> this->block_size_bit) & ((1 << this->index_bit) - 1);
    unsigned int tag = addr >> (this->index_bit + this->block_size_bit);
    unsigned int block_index = (addr >> 2) & ((1 << (this->block_size_bit - 2)) - 1);
    if (hit)
    {
        return (*(this->cache))[way_num * this->set_num + index][block_index];
    }
    else
    {
        unsigned int lru_way = 0;
        for (unsigned int i = 1; i < this->cache_way; ++i)
        {
            if (this->lru_map[index * this->cache_way + i] > this->lru_map[index * this->cache_way + lru_way])
            {
                lru_way = i;
            }
        }
        way_num = lru_way;
        unsigned int old_tag = this->cache_line[index][way_num];
        if (this->dirty[index][way_num])
        {
            unsigned int write_back_addr = ((old_tag << this->index_bit) | index) << this->block_size_bit;
            for (unsigned int i = 0; i < (*(this->cache))[way_num * this->set_num + index].len; ++i)
            {
                this->memory->write(write_back_addr | (i * 4), (*(this->cache))[way_num * this->set_num + index][i]);
            }
        }
        unsigned int read_addr = ((tag << this->index_bit) | index) << this->block_size_bit;
        for (unsigned int i = 0; i < (*(this->cache))[way_num * this->set_num + index].len; ++i)
        {
            (*(this->cache))[way_num * this->set_num + index][i] = this->memory->read(read_addr | (i * 4));
        }
        this->cache_line[index][way_num] = tag;
        this->dirty[index][way_num] = false;
        this->update_lru(index, way_num);
        prefetch(addr); // 預取數據
        return (*(this->cache))[way_num * this->set_num + index][block_index];
    }
}

void CacheManager::write(unsigned int addr, unsigned int value)
{
    unsigned int way_num = 0xFF;
    bool hit = this->check_cache(addr, way_num);
    unsigned int index = (addr >> this->block_size_bit) & ((1 << this->index_bit) - 1);
    unsigned int tag = addr >> (this->index_bit + this->block_size_bit);
    unsigned int block_index = (addr >> 2) & ((1 << (this->block_size_bit - 2)) - 1);
    if (hit)
    {
        (*(this->cache))[way_num * this->set_num + index][block_index] = value;
        this->dirty[index][way_num] = true;
    }
    else
    {
        unsigned int lru_way = 0;
        for (unsigned int i = 1; i < this->cache_way; ++i)
        {
            if (this->lru_map[index * this->cache_way + i] > this->lru_map[index * this->cache_way + lru_way])
            {
                lru_way = i;
            }
        }
        way_num = lru_way;
        unsigned int old_tag = this->cache_line[index][way_num];
        if (this->dirty[index][way_num])
        {
            unsigned int write_back_addr = ((old_tag << this->index_bit) | index) << this->block_size_bit;
            for (unsigned int i = 0; i < (*(this->cache))[way_num * this->set_num + index].len; ++i)
            {
                this->memory->write(write_back_addr | (i * 4), (*(this->cache))[way_num * this->set_num + index][i]);
            }
        }
        unsigned int read_addr = ((tag << this->index_bit) | index) << this->block_size_bit;
        for (unsigned int i = 0; i < (*(this->cache))[way_num * this->set_num + index].len; ++i)
        {
            (*(this->cache))[way_num * this->set_num + index][i] = this->memory->read(read_addr | (i * 4));
        }
        (*(this->cache))[way_num * this->set_num + index][block_index] = value;
        this->cache_line[index][way_num] = tag;
        this->dirty[index][way_num] = true;
        this->update_lru(index, way_num);
    }
    this->memory->write(addr, value);
}

unsigned int CacheManager::get_tag_bits()
{
    return this->tag_bits;
}

unsigned int *CacheManager::find(unsigned int addr)
{
    unsigned int way_num = 0xFF;
    if (this->check_cache(addr, way_num))
    {
        unsigned int index = (addr >> this->block_size_bit) & ((1 << this->index_bit) - 1);
        unsigned int block_index = (addr >> 2) & ((1 << (this->block_size_bit - 2)) - 1);
        return &((*(this->cache))[way_num * this->set_num + index][block_index]);
    }
    return nullptr;
}

CacheManager::~CacheManager(){

};