#pragma once

#include "builder.h"

// 构造胖人
class FatBuilder : public Builder {
public:
    void BuildHead();
    void BuildBody();
    void BuildLeftArm();
    void BuildRightArm();
    void BuildLeftLeg();
    void BuildRightLeg();
};
