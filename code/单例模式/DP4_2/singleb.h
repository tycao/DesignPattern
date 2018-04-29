#pragma once
#include "singleton.h"

class SingletonB : public Singleton{
    //����Ϊ��Ԫ�࣬������Singleton�޷���������SingletonB�Ĺ��캯��
    friend class Singleton;
public:
    void show() {cout << "SingletonB...\n"; }
private:
    //Ϊ�������ԣ���������޷�ͨ�����캯������ʵ����SingeltonB
    SingletonB() = default;
};
