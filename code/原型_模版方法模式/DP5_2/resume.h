#pragma once
#include <iostream>
using namespace std;

// ½Ó¿Ú
class Resume {
protected:
    virtual void SetPersonalInfo() = 0;
    virtual void SetEducation() = 0;
    virtual void SetWorkExp() = 0;
public:
    void FillResume() {
        SetPersonalInfo();
        SetEducation();
        SetWorkExp();
    }
};
