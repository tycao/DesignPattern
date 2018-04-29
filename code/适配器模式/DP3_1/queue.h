#pragma once

#include "deque.h"
#include "sequence.h"

// ���� �� �Ƚ��ȳ���������
class Queue : public Sequence {
public:
    void push(int i) { deque.push_back(i); }
    void pop() { deque.pop_front(); }
private:
    Deque deque;    // ˫�˶���
};
