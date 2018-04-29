#pragma once
#include "singleton.h"

class SingletonA : public Singleton{
    //����Ϊ��Ԫ�࣬������Singleton�޷���������SingletonA�Ĺ��캯��
    friend class Singleton;
public:
    void show() { cout << "SingletonA...\n"; }
private:
    //Ϊ�������ԣ���������޷�ͨ�����캯������ʵ����SingletonA
    SingletonA() = default;
};
