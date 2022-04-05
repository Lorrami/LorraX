#pragma once

struct DefaultShape
{
    virtual void FindIntersection(DefaultShape *Object) = 0;
};
