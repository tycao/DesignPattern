#pragma once

#include <cstdio>

class Builder {
public:
    virtual void BuildHead();
    virtual void BuildBody();
    virtual void BuildLeftArm();
    virtual void BuildRightArm();
    virtual void BuildLeftLeg();
    virtual void BuildRightLeg();
};
