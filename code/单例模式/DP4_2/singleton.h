#pragma once
#include <iostream>
using namespace std;

class Singleton{
public:
    static Singleton* GetInstance(const char*);
    virtual void show();
protected:
    //����Ϊ�����������˽�����ԣ������޷����ʸ���Ĺ��캯��
    Singleton();
private:
    // Ψһʵ����ָ��
    static Singleton *singleton;
};

