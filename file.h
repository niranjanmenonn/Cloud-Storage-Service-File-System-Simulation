#ifndef FILE_H
#define FILE_H

#include <string>

class File {
public:
    File(const std::string& name);
    void writeData(const std::string& data);
    std::string readData() const;
    std::string getName() const;

private:
    std::string name;
    std::string data;
};

#endif // FILE_H
