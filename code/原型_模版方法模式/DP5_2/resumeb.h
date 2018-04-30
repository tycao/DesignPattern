#pragma once

#include "resume.h"

class ResumeB : public Resume {
    void SetPersonalInfo() { cout<<"B's PersonalInfo"<<endl; }
    void SetEducation() { cout<<"B's Education"<<endl; }
    void SetWorkExp() { cout<<"B's Work Experience"<<endl; }
};
