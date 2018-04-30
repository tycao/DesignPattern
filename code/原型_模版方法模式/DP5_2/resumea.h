#pragma once

#include "resume.h"

class ResumeA : public Resume {
    void SetPersonalInfo() { cout<<"A's PersonalInfo"<<endl; }
    void SetEducation() { cout<<"A's Education"<<endl; }
    void SetWorkExp() { cout<<"A's Work Experience"<<endl; }
};
