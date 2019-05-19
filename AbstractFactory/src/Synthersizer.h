//
// Created by pda on 27.04.19.
//

#ifndef SHOPA_SYNTHERSIZER_H
#define SHOPA_SYNTHERSIZER_H

#include <string>
#include "ProductInterface.h"

using namespace std;

class Synthersizer : public ProductInterface {
private:
    string name;
    int price;
public:
    Synthersizer() : name("example synthersizer"), price(40000) {};

    string get_name();

    int get_price();
};


#endif //SHOPA_SYNTHERSIZER_H
