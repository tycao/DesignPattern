#pragma once
#include <iostream>

// 抽象基类：不能直接实例化抽象基类
class SingleCore {
public:
    virtual void show() = 0;
};
