#pragma once

#include "builder.h"

// 构造瘦人
class ThinBuilder : public Builder {
public:
    void BuildHead();
    void BuildBody();
    void BuildLeftArm();
    void BuildRightArm();
    void BuildLeftLeg();
    void BuildRightLeg();
};
