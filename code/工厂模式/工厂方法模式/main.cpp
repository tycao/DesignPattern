/**
 * 工厂方法模式
*/
#include "factory.h"

int main(int argc, char *argv[])
{
    SingleCore* aPtr = FactoryA().CreateSingleCore();
    aPtr->show();

    SingleCore* bPtr = FactoryB().CreateSingleCore();
    bPtr->show();

    return 0;
}
