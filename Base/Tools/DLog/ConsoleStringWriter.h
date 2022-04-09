#pragma once

#include <iostream>
#include "IStringWriter.h"

class ConsoleStringWriter : public IStringWriter {
public:
    void StringWriter(std::string text) override;
};
