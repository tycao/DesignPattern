#pragma once

#include "builder.h"

// 构造指挥官
class Director : public Builder {
public:
    // 构造函数
    Director(Builder* builder);

    // 成员函数
    void Create();
private:
    Builder* m_pBuilder;
};
