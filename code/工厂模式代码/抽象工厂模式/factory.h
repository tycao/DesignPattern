#pragma once
#include "singlecorea.h"
#include "singlecoreb.h"
#include "singlecorevipa.h"
#include "singlecorevipb.h"

// ���������ӿ�
class Factory {
public:
    virtual SingleCore     *CreateSingleCore()      = 0;
    virtual SingleCoreVIP  *CreateSingleCoreVIP()   = 0;
};

// ��������A
class FactoryA : public Factory {
public:
    SingleCore     *CreateSingleCore()      { return new SingleCoreA; }
    SingleCoreVIP  *CreateSingleCoreVIP()   { return new SingleCoreVIPA; }
};

// ��������B
class FactoryB : public Factory {
public:
    SingleCore      *CreateSingleCore()     { return new SingleCoreB; }
    SingleCoreVIPB  *CreateSingleCoreVIP()  { return new SingleCoreVIPB; }
};
