#pragma once

#include <iostream>


// ����һ��ö������
enum class CTYPE {COREA, COREB};

// ������� �� ����ֱ��ʵ��������
class SingleCore {
public:
    // ���麯��
    virtual void show() = 0;
};
