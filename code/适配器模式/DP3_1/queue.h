#pragma once

#include "deque.h"
#include "sequence.h"

// 队列 ： 先进先出、后进后出
class Queue : public Sequence {
public:
    void push(int i) { deque.push_back(i); }
    void pop() { deque.pop_front(); }
private:
    Deque deque;    // 双端队列
};
