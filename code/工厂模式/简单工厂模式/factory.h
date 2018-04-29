/**
 * 简单工厂模式
*/

#pragma once

#include "singlecorea.h"
#include "singlecoreb.h"

class Factory {
public:
    SingleCore* CreateSingleCore(enum CTYPE ctype) {
        switch (ctype) {
            case CTYPE::COREA:      return new SingleCoreA; // 生产A
                break;
        case CTYPE::COREB:          return new SingleCoreB; // 生产B
                break;
        default:                    return nullptr;         // 不生产
        }
    }
};
