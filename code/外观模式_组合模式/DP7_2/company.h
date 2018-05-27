#pragma once
#include <string>

class Company{
public:
    Company(std::string name);
    virtual ~Company();
    virtual void Add(Company*);
    virtual void Show(int);
protected:
    std::string m_name;
};
