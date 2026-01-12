# Reads from a text file
# Then prints lines with a given substring

def read_file(filename: str, substring: str) -> None:
    with open(filename, 'r') as file:
        for line in file:
            if substring in line:
                print(line.strip())


if __name__ == "__main__":
    read_file("text.txt", "Python")