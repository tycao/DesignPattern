#pragma once

#include "deque.h"
#include "sequence.h"

// 栈 ： 先进后出、后进先出
class Stack : public Sequence {
public:
    void push(int i) { deque.push_back(i); }
    void pop() { deque.pop_back(); }
private:
    Deque deque;    // 双端队列
};
