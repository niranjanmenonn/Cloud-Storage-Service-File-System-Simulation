#include "FileSystem.h"

FileSystem::FileSystem() : root(std::make_shared<Directory>("root")) {}

void FileSystem::createFile(const std::string& name) {
    root->addFile(std::make_shared<File>(name));
}

void FileSystem::writeFile(const std::string& name, const std::string& data) {
    auto file = root->getFile(name);
    if (file) {
        file->writeData(data);
    }
}

std::string FileSystem::readFile(const std::string& name) const {
    auto file = root->getFile(name);
    if (file) {
        return file->readData();
    }
    return "";
}

void FileSystem::createDirectory(const std::string& name) {
    root->addDirectory(std::make_shared<Directory>(name));
}
