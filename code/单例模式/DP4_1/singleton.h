#pragma once
#include <iostream>
using namespace std;

// singleton.h
class Singleton {
public:
    static Singleton* GetInstance();

    void show() const {cout << "Singleton::m_i : " << m_i << "\n"; }
private:
    Singleton() {}
    static Singleton *singleton;
    static const int m_i;   // ��̬const���� �� ����������ʵ������Ҳ����������ʵ����
};
const int Singleton::m_i = 10;
Singleton* Singleton::singleton = nullptr;
Singleton* Singleton::GetInstance() {
        if (singleton == nullptr)
            singleton = new Singleton();
        return singleton;
}
