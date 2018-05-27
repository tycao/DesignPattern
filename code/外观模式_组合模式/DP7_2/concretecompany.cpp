#include "concretecompany.h"
using namespace std;

ConcreteCompany::ConcreteCompany(string name) : Company(name) {

}
ConcreteCompany::~ConcreteCompany() {

}
void ConcreteCompany::Add(Company* pCom) {
    // 位于树的中间，可以增加子树
    m_listCompany.push_back(pCom);
}
void ConcreteCompany::Show(int depth) {
    for (int i = 0; i != depth; ++i) {
        printf("-");
    }
    printf("%s\n", m_name);
    for (list<Company*>::iterator iter = m_listCompany.begin(); iter != m_listCompany.end(); ++iter) {
        // 显示下层节点
        (*iter)->Show(depth + 2);
    }

}
