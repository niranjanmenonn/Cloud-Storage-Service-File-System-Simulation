#include "Directory.h"

Directory::Directory(const std::string& name) : name(name) {}

void Directory::addFile(const std::shared_ptr<File>& file) {
    files[file->getName()] = file;
}

std::shared_ptr<File> Directory::getFile(const std::string& name) const {
    auto it = files.find(name);
    if (it != files.end()) {
        return it->second;
    }
    return nullptr;
}

void Directory::addDirectory(const std::shared_ptr<Directory>& directory) {
    directories[directory->getName()] = directory;
}

std::shared_ptr<Directory> Directory::getDirectory(const std::string& name) const {
    auto it = directories.find(name);
    if (it != directories.end()) {
        return it->second;
    }
    return nullptr;
}

std::string Directory::getName() const {
    return name;
}
