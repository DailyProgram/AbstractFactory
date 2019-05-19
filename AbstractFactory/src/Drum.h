//
// Created by pda on 27.04.19.
//

#ifndef SHOPA_DRUM_H
#define SHOPA_DRUM_H

#include <string>

#include "ProductInterface.h"

using namespace std;

class Drum : public ProductInterface {
private:
    string name;
    int price;
public:
    Drum() : name("example drum"), price(20000) {};

    string get_name();

    int get_price();

};


#endif //SHOPA_DRUM_H
