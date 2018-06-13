//
// Created by gustavo on 13/06/18.
//

#ifndef TESTGENERIC_ATOM_H
#define TESTGENERIC_ATOM_H

#include <iostream>

class Atom
{
private:
    double x, y, z;

public:
    Atom(double x, double y, double z) : x(x), y(y), z(z) {};

    std::string print();

};


#endif //TESTGENERIC_ATOM_H
