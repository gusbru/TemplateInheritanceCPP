//
// Created by gustavo on 13/06/18.
//

#ifndef TESTGENERIC_MOLECULEPROBE_H
#define TESTGENERIC_MOLECULEPROBE_H

#include "Molecule.h"

template<class T>
class MoleculeProbe : public Molecule<T>
{
private:
    int n = 0;

public:
    explicit MoleculeProbe(int size);

};

template<class T>
MoleculeProbe<T>::MoleculeProbe(int size) : Molecule<T>(size)
{
    std::cout << "MoleculeProbe created" << std::endl;
}



#endif //TESTGENERIC_MOLECULEPROBE_H
