//
// Created by pda on 27.04.19.
//

#ifndef SHOPA_DRUMFACTORY_H
#define SHOPA_DRUMFACTORY_H

#include "MusicFactoryInterface.h"

class DrumFactory : public MusicFactoryInterface {
public:
    ProductInterface *create();

};


#endif //SHOPA_DRUMFACTORY_H
