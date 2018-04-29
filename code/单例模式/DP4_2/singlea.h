#pragma once
#include "singleton.h"

class SingletonA : public Singleton{
    //必须为友元类，否则父类Singleton无法访问子类SingletonA的构造函数
    friend class Singleton;
public:
    void show() { cout << "SingletonA...\n"; }
private:
    //为保护属性，这样外界无法通过构造函数进行实例化SingletonA
    SingletonA() = default;
};
