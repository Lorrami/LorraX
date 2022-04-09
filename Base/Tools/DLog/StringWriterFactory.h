#pragma once

#include <memory>
#include "time.h"
#include "OutputType.h"
#include "IStringWriter.h"
#include "ConsoleStringWriter.h"
#include "FileStringWriter.h"

class StringWriterFactory {
public:
    static std::unique_ptr<IStringWriter> CreatWriter(OutputType type);
};

std::unique_ptr<IStringWriter> StringWriterFactory::CreatWriter(OutputType type) {
    switch (type) {
        case OutputType::Console :
            return std::make_unique<ConsoleStringWriter>();
        case OutputType::File :
            return std::make_unique<FileStringWriter>();
    }
}
