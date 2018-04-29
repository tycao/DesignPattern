#include "singleton.h"


int main(int argc, char *argv[])
{
    auto obj = Singleton::GetInstance();
    obj->show();

    auto obj2 = Singleton::GetInstance();
    obj2->show();
    return 0;
}
