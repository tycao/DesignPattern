#include <cstdio>   // for printf()
#include "stack.h"
#include "queue.h"

int main(int argc, char *argv[])
{

    Sequence *s1 = new Stack;
    Sequence *s2 = new Queue;
    s1->push(1);
    s1->push(2);
    s1->pop();
    s1->pop();

    printf("---------------------\n");

    s2->push(1);
    s2->push(2);
    s2->pop();
    s2->pop();

    // �ͷŶ����ڴ棬��ֹ�ڴ�й¶
    delete s1;
    delete s2;

    return 0;
}
