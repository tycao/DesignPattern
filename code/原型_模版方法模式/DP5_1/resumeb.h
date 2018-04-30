#pragma once
#include "resume.h"

// ����B
class ResumeB : public Resume {
public:
    ResumeB(const char*);       // ���캯��
    ResumeB(const ResumeB&);    // �������캯��
    ~ResumeB();                 // ��������
    ResumeB* Clone();           // ��¡�����ĺ���
    void Show();                // ��ʾ����
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
