/**
 * �򵥹���ģʽ
*/

#pragma once

#include "singlecorea.h"
#include "singlecoreb.h"

class Factory {
public:
    SingleCore* CreateSingleCore(enum CTYPE ctype) {
        switch (ctype) {
            case CTYPE::COREA:      return new SingleCoreA; // ����A
                break;
        case CTYPE::COREB:          return new SingleCoreB; // ����B
                break;
        default:                    return nullptr;         // ������
        }
    }
};
