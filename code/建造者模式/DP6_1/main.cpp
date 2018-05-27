#include <memory>

#include "director.h"
#include "thinbuilder.h"
#include "fatbuilder.h"

using namespace std;


int main(int argc, char *argv[])
{
    shared_ptr<Builder> ptr = make_shared<ThinBuilder>();
    Director direct(ptr.get());
    direct.Create();

    printf("/////////////////////////////////\n");

    shared_ptr<Builder> ptr2(new FatBuilder());
    Director(ptr2.get()).Create();
    return 0;
}
