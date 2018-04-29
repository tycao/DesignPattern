#pragma once
#include "singlecorea.h"
#include "singlecoreb.h"
#include "singlecorevipa.h"
#include "singlecorevipb.h"

// 工厂函数接口
class Factory {
public:
    virtual SingleCore     *CreateSingleCore()      = 0;
    virtual SingleCoreVIP  *CreateSingleCoreVIP()   = 0;
};

// 工厂函数A
class FactoryA : public Factory {
public:
    SingleCore     *CreateSingleCore()      { return new SingleCoreA; }
    SingleCoreVIP  *CreateSingleCoreVIP()   { return new SingleCoreVIPA; }
};

// 工厂函数B
class FactoryB : public Factory {
public:
    SingleCore      *CreateSingleCore()     { return new SingleCoreB; }
    SingleCoreVIPB  *CreateSingleCoreVIP()  { return new SingleCoreVIPB; }
};
