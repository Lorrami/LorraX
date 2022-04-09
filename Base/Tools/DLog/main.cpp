#include "StringWriterFactory.h"

int main() {
    std::unique_ptr<IStringWriter> writer = StringWriterFactory::CreatWriter(OutputType::File);

    writer->StringWriter("Writing the info(you're gay)");

    return 777;
}
