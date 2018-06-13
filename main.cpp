#include <iostream>

#include "MoleculeProbe.h"
#include "Atom.h"

int main()
{
    auto *molecule = new MoleculeProbe<Atom*>(1);
    auto *atom1 = new Atom(0,0,0);
    auto *atom2 = new Atom(1,1,1);
    auto *atom3 = new Atom(2,2,2);
    auto *atom4 = new Atom(3,3,3);

    molecule->addItem(atom1);
    molecule->addItem(atom2);
    molecule->addItem(atom3);
    molecule->addItem(atom4);

    std::cout << molecule->getSize() << std::endl;

    molecule->printAtom(0);

    return 0;
}