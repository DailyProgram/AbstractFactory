//
// Created by pda on 27.04.19.
//

#ifndef SHOPA_GUITAR_H
#define SHOPA_GUITAR_H

#include <string>

#include "ProductInterface.h"

using namespace std;


enum TGuitar {
    Fender, Yamaha, Stratocaster
};

enum num_strings {
    six, eight, twelve
};

class Guitar : public ProductInterface {
private:
    string name;
    int price;
    TGuitar typeguitar;
    num_strings kol_strings;
public:
    Guitar() : name("example name"), price(10000), typeguitar(Fender), kol_strings(six) {};

    string get_name();

    int get_price();
};


#endif //SHOPA_GUITAR_H
