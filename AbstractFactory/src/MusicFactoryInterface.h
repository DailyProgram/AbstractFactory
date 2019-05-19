//
// Created by pda on 27.04.19.
//

#ifndef SHOPA_MUSICFACTORYINTERFACE_H
#define SHOPA_MUSICFACTORYINTERFACE_H

#include "ProductInterface.h"

class MusicFactoryInterface {
public:
    virtual ProductInterface *create() = 0;
};


#endif //SHOPA_MUSICFACTORYINTERFACE_H
