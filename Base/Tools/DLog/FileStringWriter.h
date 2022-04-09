#pragma once

#include "IStringWriter.h"
#include <iostream>
#include <memory>

class FileStringWriter : public IStringWriter {
public:
    void StringWriter(std::string text) override;
};
