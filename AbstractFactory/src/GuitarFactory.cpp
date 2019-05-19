//
// Created by pda on 27.04.19.
//
#include "GuitarFactory.h"
#include "Guitar.h"

ProductInterface *GuitarFactory::create() {
    Guitar *guitar = new Guitar();
    return guitar;
}