#pragma once

#include <cstdio>
#include <ctime>
#include <cmath>

class Clock {
private:
    clock_t start;
public:
    Clock();
    ~Clock() = delete;
public:
    float GetElapsedTime() const;
    void Restart();
};
