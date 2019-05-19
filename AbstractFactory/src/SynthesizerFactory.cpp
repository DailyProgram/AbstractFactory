//
// Created by pda on 27.04.19.
//

#include "SynthesizerFactory.h"
#include "Synthersizer.h"

ProductInterface *SynthesizerFactory::create() {
    Synthersizer *synthersizer = new Synthersizer();
    return synthersizer;
}

