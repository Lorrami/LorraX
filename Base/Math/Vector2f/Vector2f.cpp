#include "Vector2f.hpp"

Vector2f::Vector2f()
{
    x = 0.0f;
    y = 0.0f;
}
Vector2f::Vector2f(float xy)
{
    this->x = xy;
    this->y = xy;
}
Vector2f::Vector2f(float x, float y)
{
    this->x = x;
    this->y = y;
}