#include "cache.h"
#include "lru.h"
#include "fifo.h"
#include "random.h"

int main(int argc, char *argv[])
{
#ifdef METHOD1
    Cache cache(new LRU_ReplaceAlgothrim);
    cache.Replace();
#elif defined(METHOD2)
    Cache(RA::LRU).Replace();
#elif defined(METHOD3)
    Cache<LRU_ReplaceAlgothrim>().Replace();
#endif
    return 0;
}
