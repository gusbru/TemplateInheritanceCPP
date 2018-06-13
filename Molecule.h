//
// Created by gustavo on 13/06/18.
//

#ifndef TESTGENERIC_MOLECULE_H
#define TESTGENERIC_MOLECULE_H

#include <iostream>
#include <vector>

template<class T>
class Molecule
{
private:
    double centerOfMass = 0.0;
    std::vector<T> atoms{};
    T name;

protected:


public:
    explicit Molecule(int size);

    double getCenterOfMass();

    void addItem(T item);

    int getSize();

    void printAtom(int index);

};

template<class T>
Molecule<T>::Molecule(int size)
{
    atoms.reserve(size);
    std::cout << "Molecule created!" << std::endl;
}

template<class T>
double Molecule<T>::getCenterOfMass()
{
    return this->centerOfMass;
}

template<class T>
void Molecule<T>::addItem(T item)
{
    atoms.emplace_back(item);
}

template<class T>
int Molecule<T>::getSize()
{
    return (int) atoms.size();
}

template<class T>
void Molecule<T>::printAtom(int index)
{
    std::cout << atoms.at(index)->print() << std::endl;
}

#endif //TESTGENERIC_MOLECULE_H
