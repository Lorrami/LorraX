#pragma once

#include <iostream>

class IStringWriter {
public:
    virtual void StringWriter(std::string text) = 0;
};