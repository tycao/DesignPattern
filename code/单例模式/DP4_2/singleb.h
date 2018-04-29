#pragma once
#include "singleton.h"

class SingletonB : public Singleton{
    //必须为友元类，否则父类Singleton无法访问子类SingletonB的构造函数
    friend class Singleton;
public:
    void show() {cout << "SingletonB...\n"; }
private:
    //为保护属性，这样外界无法通过构造函数进行实例化SingeltonB
    SingletonB() = default;
};
