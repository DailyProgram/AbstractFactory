//
// Created by pda on 27.04.19.
//

#ifndef SHOPA_PRODUCTINTERFACE_H
#define SHOPA_PRODUCTINTERFACE_H

#include <string>

class ProductInterface {
public:
    virtual std::string get_name() = 0;

    virtual int get_price() = 0;


};


#endif //SHOPA_PRODUCTINTERFACE_H
