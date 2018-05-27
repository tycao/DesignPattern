#include "financedepartment.h"


FinanceDepartment::FinanceDepartment(std::string name)
    : Company(name) {

}
FinanceDepartment::~FinanceDepartment() { }
void FinanceDepartment::Show(int depth) {
    // 只需显示，无限添加函数，因为已是叶子节点
    for (int i = 0; i != depth; ++i) {
        printf("-");
    }
    printf("%s\n", m_name);
}

