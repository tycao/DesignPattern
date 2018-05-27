#include "director.h"

// 构造函数
Director::Director(Builder* builder) : m_pBuilder(builder) { }

// 成员函数
void Director::Create() {
    m_pBuilder->BuildHead();
    m_pBuilder->BuildBody();
    m_pBuilder->BuildLeftArm();
    m_pBuilder->BuildRightArm();
    m_pBuilder->BuildLeftLeg();
    m_pBuilder->BuildRightLeg();
}
