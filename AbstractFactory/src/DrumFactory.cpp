//
// Created by pda on 27.04.19.
//
#include "DrumFactory.h"
#include "Drum.h"

ProductInterface* DrumFactory::create() {
    Drum *drum = new Drum();
    return drum;
}