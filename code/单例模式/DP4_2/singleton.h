#pragma once
#include <iostream>
using namespace std;

class Singleton{
public:
    static Singleton* GetInstance(const char*);
    virtual void show();
protected:
    //必须为保护，如果是私有属性，子类无法访问父类的构造函数
    Singleton();
private:
    // 唯一实例的指针
    static Singleton *singleton;
};

