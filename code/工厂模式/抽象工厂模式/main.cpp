/**
 * 抽象工厂模式
*/

#include "factory.h"

int main(int argc, char *argv[])
{
    FactoryA().CreateSingleCore()->show();
    FactoryB().CreateSingleCore()->show();

    FactoryA().CreateSingleCoreVIP()->show();
    FactoryB().CreateSingleCoreVIP()->show();

    return 0;
}
