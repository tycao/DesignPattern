#pragma once

#include <cstring>  // for strlen, strncpy
#include <cstdio>   // for printf

// ∏∏¿‡
class Resume{
protected:
    char *name;
public:
    Resume() {}
    virtual ~Resume() {}
    virtual Resume* Clone() = 0;
    virtual void Set(char *n) {}
    virtual void Show() = 0;
};
