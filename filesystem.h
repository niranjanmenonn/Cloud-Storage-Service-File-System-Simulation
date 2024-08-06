#ifndef FILESYSTEM_H
#define FILESYSTEM_H

#include <memory>
#include "Directory.h"

class FileSystem {
public:
    FileSystem();
    void createFile(const std::string& name);
    void writeFile(const std::string& name, const std::string& data);
    std::string readFile(const std::string& name) const;
    void createDirectory(const std::string& name);

private:
    std::shared_ptr<Directory> root;
};

#endif // FILESYSTEM_H
