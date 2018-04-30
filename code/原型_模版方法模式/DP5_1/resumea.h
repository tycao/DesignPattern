#pragma once
#include "resume.h"

// 子类A
class ResumeA : public Resume {
public:
    ResumeA(const char*);       // 构造函数
    ResumeA(const ResumeA&);    // 拷贝构造函数
    ~ResumeA();                 // 析构函数
    ResumeA* Clone();           // 克隆，关键所在
    void Show();                // 显示内容
};

ResumeA::ResumeA(const char *str) {
    if (str == nullptr) {
        name = new char[1];
        name[0] = '\0';
    }
    else {
        name = new char[strlen(str) + 1];
        strcpy(name, str);
    }
}
ResumeA::ResumeA(const ResumeA& r) {
    name = new char[strlen(r.name) + 1];
    strcpy(name, r.name);
}
ResumeA::~ResumeA() {
    delete[] name;
}
ResumeA* ResumeA::Clone() {
    return new ResumeA(*this);
}
void ResumeA::Show() {
    printf("RenameA name : %s\n", name);
}
