//
// Created by pda on 27.04.19.
//

#ifndef SHOPA_GUITARFACTORY_H
#define SHOPA_GUITARFACTORY_H

#include "MusicFactoryInterface.h"

class GuitarFactory : public    MusicFactoryInterface{

public:
    ProductInterface *create();
};


#endif //SHOPA_GUITARFACTORY_H
