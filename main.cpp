#include <iostream>
#include "FileSystem.h"

int main() {
    FileSystem fs;

    // Create directories and files
    fs.createDirectory("docs");
    fs.createFile("file1.txt");
    fs.writeFile("file1.txt", "Hello, File System!");

    // Read from file
    std::string data = fs.readFile("file1.txt");
    std::cout << "File Data: " << data << std::endl;

    return 0;
}
