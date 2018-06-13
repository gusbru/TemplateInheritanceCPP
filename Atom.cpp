//
// Created by gustavo on 13/06/18.
//

#include "Atom.h"

std::string Atom::print()
{
    std::string ret = "";
    ret = ret + "x:" + std::to_string(x);
    ret = ret + "|y:" + std::to_string(y);
    ret = ret + "|z:" + std::to_string(z);

    return ret;
}
