#pragma once

#include "singlecorea.h"
#include "singlecoreb.h"

// ������ �� �������
class Factory {
public:
    virtual SingleCore* CreateSingleCore() = 0;
};

// A��Ʒ ������
class FactoryA : public Factory {
public:
    SingleCore* CreateSingleCore() {
        return new SingleCoreA;
    }
};

// B��Ʒ ������
class FactoryB : public Factory {
public:
    SingleCore* CreateSingleCore() {
        return new SingleCoreB;
    }
};
