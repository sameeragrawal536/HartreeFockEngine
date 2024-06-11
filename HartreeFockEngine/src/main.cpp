#include <iostream>
#include "HartreeFock.h"
#include "Schrodinger.h"

#define HYDROGEN // Can be HYDROGEN, HELIUM, or BERYLLIUM

#ifdef HYDROGEN
int main() {
    const int numBasisFuncsPerElectron = 6;
    const int numElectrons = 1;
    const int numOrbitals = (numElectrons+1)/2;

    const int numBasisFuncs = numBasisFuncsPerElectron*numElectrons;

    const int nucCharges = 1;

    double aCoefficients[numBasisFuncs] = {35.52322122, 6.513143725, 1.822142904, 0.6259552659, 0.2430767471, 0.1001124280};

    Coordinate nucCoords = Coordinate(0, 0, 0);

    GaussianBasis* gauss = new GaussianBasis[numBasisFuncs];

    for (int i = 0; i < numBasisFuncs; i++) {
        gauss[i] = GaussianBasis(aCoefficients[i], nucCharges);
    }

    Atom at = Atom(numBasisFuncs, gauss, nucCoords, nucCharges, numOrbitals, numElectrons);
    HartreeFock hfSolver = HartreeFock(at);

    double finalEnergy = hfSolver.finalSolveEnergy();
    std::cout << "\nground state energy: " << std::setprecision(10) << finalEnergy << " hartrees\n";

    Schrodinger sch = Schrodinger(hfSolver);
    std::cout << "atomic radius: " << sch.calcMaxPoint()*52.9177 << " picometers\n";
}
#endif

#ifdef HELIUM
int main() {
    const int numBasisFuncsPerElectron = 6;
    const int numElectrons = 1;
    const int numOrbitals = (numElectrons+1)/2;

    const int numBasisFuncs = numBasisFuncsPerElectron*numOrbitals;

    const int nucCharges = 2;

    double aCoefficients[numBasisFuncs] = {65.98456824, 12.09819836, 3.384639924, 1.162715163, 0.4515163224, 0.1859593559};

    Coordinate nucCoords = Coordinate(0, 0, 0);

    GaussianBasis* gauss = new GaussianBasis[numBasisFuncs];

    for (int i = 0; i < numBasisFuncs; i++) {
        gauss[i] = GaussianBasis(aCoefficients[i], nucCharges);
    }

    Atom at = Atom(numBasisFuncs, gauss, nucCoords, nucCharges, numOrbitals, numElectrons);
    HartreeFock hfSolver = HartreeFock(at);
    double finalEnergy = hfSolver.finalSolveEnergy();
    std::cout << "\nground state energy: " << std::setprecision(10) << finalEnergy << " hartrees\n";

    Schrodinger sch = Schrodinger(hfSolver);
    std::cout << "atomic radius: " << sch.calcMaxPoint()*52.9177 << " picometers\n";
}
#endif

#ifdef BERYLLIUM
int main() {
    const int numBasisFuncsPerElectron = 6;
    const int numElectrons = 4;

    const int numOrbitals = (numElectrons+1)/2;
    const int numBasisFuncs = numBasisFuncsPerElectron*numOrbitals;

    const int nucCharges = 4;

    double aCoefficients[numBasisFuncs] = {312.8704937, 57.36446253, 16.04850940, 5.513096119, 2.140896553, 0.8817394283};//, 13.63324744, 2.698375464, 0.8386530829, 0.3226600698, 0.1401314882, 0.06423251387};

    Coordinate nucCoords = Coordinate(0, 0, 0);

    GaussianBasis* gauss = new GaussianBasis[numBasisFuncs];

    for (int i = 0; i < numBasisFuncs; i++) {
        gauss[i] = GaussianBasis(aCoefficients[i], nucCharges);
    }

    Atom at = Atom(numBasisFuncs, gauss, nucCoords, nucCharges, numOrbitals, numElectrons);
    HartreeFock hfSolver = HartreeFock(at);

    double finalEnergy = hfSolver.finalSolveEnergy();
    std::cout << "\nground state energy: " << std::setprecision(10) << finalEnergy << " hartrees\n";

    Schrodinger sch = Schrodinger(hfSolver);
    std::cout << "atomic radius: " << sch.calcMaxPoint()*52.9177 << " picometers\n";
}
#endif
