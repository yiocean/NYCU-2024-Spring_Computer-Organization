#pragma once

#include "Cache.h"
#include "Memory.h"
#include <iostream>
#include <cmath>
#include <deque>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

class CacheManager
{
private:
    /*
     * 1. TAs' simulator will check if you store data in cache or not,
     *    so make sure that you use cache correctly
     * 2. When cache miss, you should call memory to get data.
     * 3. Don't modify original member function and variable, however,
     *    you are allow to declare addtional ones.
     * 4. Follow rules above, otherwise, you will get failed in this lab.
     */
    Memory *memory;
    Cache *cache;
    unsigned int size; // bytes
    unsigned int tag_bits;
    map<unsigned int, unsigned int> lru_map;

public:
    unsigned int cache_way = 16;
    unsigned int block_size = 64;
    unsigned int block_size_bit;
    unsigned int index_bit;
    unsigned int set_num;
    vector<vector<unsigned int>> cache_line;
    vector<vector<bool>> dirty;

    CacheManager(Memory *memory, Cache *cache);
    ~CacheManager();

    bool check_cache(unsigned int addr, unsigned int &way_num);
    unsigned int read(unsigned int addr);
    void write(unsigned int addr, unsigned value);
    unsigned int get_tag_bits();
    void update_lru(unsigned int index, unsigned int way_num);
    unsigned int *find(unsigned int addr);
    void prefetch(unsigned int addr);
};
