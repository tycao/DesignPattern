#pragma once

#include "singlecorea.h"
#include "singlecoreb.h"

// 工厂类 ： 抽象基类
class Factory {
public:
    virtual SingleCore* CreateSingleCore() = 0;
};

// A产品 工厂类
class FactoryA : public Factory {
public:
    SingleCore* CreateSingleCore() {
        return new SingleCoreA;
    }
};

// B产品 工厂类
class FactoryB : public Factory {
public:
    SingleCore* CreateSingleCore() {
        return new SingleCoreB;
    }
};
