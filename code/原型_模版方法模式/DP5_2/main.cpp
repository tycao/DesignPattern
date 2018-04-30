#include "resumea.h"
#include "resumeb.h"

int main()
{
    Resume *r1;

    r1 = new ResumeA();
    r1->FillResume();

    delete r1;

    r1 = new ResumeB();
    r1->FillResume();

    delete r1;
    r1 = NULL;

    return 0;
}
