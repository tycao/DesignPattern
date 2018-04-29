#pragma once

#include "replacealgorithm.h"

#include "lru.h"
#include "fifo.h"
#include "random.h"

// Cache类的定义
#ifdef CA1
class Cache {
private:
    ReplaceAlgothrim *m_ra;
public:
    Cache(ReplaceAlgothrim *ra) { m_ra = ra; }
    ~Cache() { delete m_ra; }
    void Replace() { m_ra->Replace(); }
};
#elif defined(CA2)

// Cache类需要用到的替换算法
enum class RA {LRU, FIFO, RANDOM};
class Cache {
private:
    ReplaceAlgothrim *m_ra;
public:
    Cache(RA ra) {
        switch (ra) {
        case RA::LRU:       m_ra = new LRU_ReplaceAlgothrim;
            break;
        case RA::FIFO:      m_ra = new FIFO_ReplaceAlgothrim;
            break;
        case RA::RANDOM:    m_ra = new Random_ReplaceAlgothrim;
        default:            m_ra = nullptr;
            break;
        }
    }
    ~Cache() { }
    void Replace() { m_ra->Replace(); }
};
#else
// Cache 需要用到的替换算法
template<typename RA>
class Cache {
private:
    RA m_ra;
public:
    Cache() {}
    ~Cache() {}
    void Replace() { m_ra.Replace(); }
};
#endif
