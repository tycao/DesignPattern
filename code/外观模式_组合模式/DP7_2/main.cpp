#include <memory>
#include "hrdepartment.h"
#include "financedepartment.h"
#include "concretecompany.h"

using namespace std;

int main(int argc, char *argv[])
{
    shared_ptr<Company> root(new ConcreteCompany("base firm"));
    shared_ptr<Company> leaf1(new FinanceDepartment("financial department"));
    shared_ptr<Company> leaf2(new HRDepartment("hr department"));

    root.get()->Add(leaf1.get());
    root.get()->Add(leaf2.get());

    // 分公司A
    shared_ptr<Company> mid1(new ConcreteCompany("branch A"));
    shared_ptr<Company> leaf3(new ConcreteCompany("financial department"));
    shared_ptr<Company> leaf4(new ConcreteCompany("hr department"));

    mid1.get()->Add(leaf3.get());
    mid1.get()->Add(leaf4.get());

    // 分公司B
    shared_ptr<Company> mid2(new ConcreteCompany("branch B"));
    shared_ptr<Company> leaf5(new ConcreteCompany("financial department"));
    shared_ptr<Company> leaf6(new ConcreteCompany("hr department"));

    mid2.get()->Add(leaf5.get());
    mid2.get()->Add(leaf6.get());

    // 添加子节点
    root.get()->Add(mid1.get());
    root.get()->Add(mid2.get());

    // 显示所有节点信息
    root.get()->Show(0);

    return 0;
}
