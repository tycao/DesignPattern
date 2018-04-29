#include "singleton.h"

int main(int argc, char *argv[])
{
    Singleton::GetInstance("SingletonB")->show();
    Singleton::GetInstance("SingletonA")->show();
    Singleton::GetInstance("")->show();
    return 0;
}
