def main():
    try:
        with open('inst.txt', 'r') as in_file:
            with open('TEST_INSTRUCTIONS.txt', 'w') as out_file:
                for line in in_file:
                    for pos in range(0, len(line), 8):
                        out_file.write(line[pos:pos+8] + '\n')
    except FileNotFoundError:
        print("Unable to open file")

if __name__ == "__main__":
    main()
