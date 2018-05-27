#pragma once

#include "company.h"

class HRDepartment : public Company {
public:
    HRDepartment(std::string name);
    virtual ~HRDepartment();
    virtual void Show(int depth);
};
