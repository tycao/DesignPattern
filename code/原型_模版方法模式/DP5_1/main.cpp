#include "resumea.h"
#include "resumeb.h"

int main(int argc, char *argv[])
{
    Resume *r1 = new ResumeA("A");
    Resume *r2 = new ResumeB("B");
    Resume *r3 = r1->Clone();
    Resume *r4 = r2->Clone();

    r1->Show();
    r2->Show();

    // ɾ��r1 r2
    delete r1;
    delete r2;
    r1 = r2 = 0;

    // ��� ���Զ�r3 r4��Ӱ��
    r3->Show();
    r4->Show();
    delete r3;
    delete r4;
    r3 = r4 = 0;

    return 0;
}
