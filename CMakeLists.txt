cmake_minimum_required(VERSION 3.10)
project(TestGeneric)

set(CMAKE_CXX_STANDARD 11)

add_executable(TestGeneric main.cpp Molecule.cpp Molecule.h MoleculeProbe.cpp MoleculeProbe.h Atom.cpp Atom.h)