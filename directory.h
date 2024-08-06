#ifndef DIRECTORY_H
#define DIRECTORY_H

#include <map>
#include <memory>
#include "File.h"

class Directory {
public:
    Directory(const std::string& name);
    void addFile(const std::shared_ptr<File>& file);
    std::shared_ptr<File> getFile(const std::string& name) const;
    void addDirectory(const std::shared_ptr<Directory>& directory);
    std::shared_ptr<Directory> getDirectory(const std::string& name) const;
    std::string getName() const;

private:
    std::string name;
    std::map<std::string, std::shared_ptr<File>> files;
    std::map<std::string, std::shared_ptr<Directory>> directories;
};

#endif // DIRECTORY_H
