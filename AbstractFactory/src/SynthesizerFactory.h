//
// Created by pda on 27.04.19.
//

#ifndef SHOPA_SYNTHESIZERFACTORY_H
#define SHOPA_SYNTHESIZERFACTORY_H

#include "MusicFactoryInterface.h"

class SynthesizerFactory : public MusicFactoryInterface {
public:
    ProductInterface *create();
};


#endif //SHOPA_SYNTHESIZERFACTORY_H
