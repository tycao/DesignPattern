#pragma once

#include "deque.h"
#include "sequence.h"

// ջ �� �Ƚ����������ȳ�
class Stack : public Sequence {
public:
    void push(int i) { deque.push_back(i); }
    void pop() { deque.pop_back(); }
private:
    Deque deque;    // ˫�˶���
};
