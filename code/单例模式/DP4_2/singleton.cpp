#include <cstring>  // for strcmp()
#include "singleton.h"
#include "singlea.h"
#include "singleb.h"

// static 数据成员必须类外实例化
Singleton *Singleton::singleton = nullptr;
// 默认构造函数
Singleton::Singleton() {}
Singleton* Singleton::GetInstance(const char* type) {
    if (singleton == nullptr) {
        if(0 == strcmp(type, "SingletonA"))
            singleton = new SingletonA;
        else if(0 == strcmp(type, "SingletonB"))
            singleton = new SingletonB;
        else
            singleton = new Singleton;
    }
    return singleton;
}
void Singleton::show() { cout << "Singleton...\n"; }
