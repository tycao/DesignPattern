#pragma once

#include <iostream>

using namespace std;

// к╚╤к╤сап
class Deque {
public:
    void push_back(int i) {cout << "Deque push_back\n"; }
    void push_front(int i) {cout << "Deque push_front\n"; }
    void pop_back() {cout << "Deque pop_back\n"; }
    void pop_front() { cout << "Deque pop_front\n"; }
};
