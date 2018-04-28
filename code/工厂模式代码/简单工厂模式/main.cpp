/**
 * 简单工厂模式
*/

#include "factory.h"

int main(int argc, char *argv[])
{
    Factory factory;
    SingleCore* a = factory.CreateSingleCore(CTYPE::COREA);
    a->show();
    return 0;
}
