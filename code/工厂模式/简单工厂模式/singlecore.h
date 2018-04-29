#pragma once

#include <iostream>


// 创建一个枚举类型
enum class CTYPE {COREA, COREB};

// 抽象基类 ： 不能直接实例化此类
class SingleCore {
public:
    // 纯虚函数
    virtual void show() = 0;
};
