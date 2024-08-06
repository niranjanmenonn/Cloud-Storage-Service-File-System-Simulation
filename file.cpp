#include "File.h"

File::File(const std::string& name) : name(name) {}

void File::writeData(const std::string& data) {
    this->data = data;
}

std::string File::readData() const {
    return data;
}

std::string File::getName() const {
    return name;
}
