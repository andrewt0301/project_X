#include "inject.h"

#include <fstream>

namespace xinject {

void save(const std::string &path, const char* data, size_t size) {
    std::ofstream fos(path, std::ios::binary);
    fos.write(data, size);
}

} // namespace xinject
