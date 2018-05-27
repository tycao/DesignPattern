#pragma once

#include <list>
#include "company.h"

// 具体公司
class ConcreteCompany : public Company {
public:
    ConcreteCompany(std::string);
    virtual ~ConcreteCompany();
    void Add(Company* pCom);
    void Show(int depth);
private:
    std::list<Company*> m_listCompany;
};
