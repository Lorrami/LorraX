#include "FileStringWriter.h"
#include <fstream>

void FileStringWriter::StringWriter(std::string text) {
    std::ofstream out;
    out.open("hello.txt");
    if (out.is_open()) {
        out << text << std::endl;
    }
    out.close();
    std::cout << "Writed in file" << std::endl;
}
