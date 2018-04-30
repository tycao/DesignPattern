#pragma once
#include "resume.h"

// 子类B
class ResumeB : public Resume {
public:
    ResumeB(const char*);       // 构造函数
    ResumeB(const ResumeB&);    // 拷贝构造函数
    ~ResumeB();                 // 析构函数
    ResumeB* Clone();           // 克隆，核心函数
    void Show();                // 显示内容
};

ResumeB::ResumeB(const char *str) {
    if (str == nullptr) {
        name = new char[1];
        name[0] = '\0';
    }
    else {
        name = new char[strlen(str) + 1];
        strcpy(name, str);
    }
}
ResumeB::ResumeB(const ResumeB& r) {
    name = new char[strlen(r.name) + 1];
    strcpy(name, r.name);
}
ResumeB::~ResumeB() {
    delete[] name;
}
ResumeB* ResumeB::Clone() {
    return new ResumeB(*this);
}
void ResumeB::Show() {
    printf("ResumeB name : %s\n", name);
}
