#pragma once

#include "company.h"

// 具体的部门--财务部
class FinanceDepartment : public Company {
public:
    FinanceDepartment(std::string name);
    virtual ~FinanceDepartment();
    virtual void Show(int depth);
};
