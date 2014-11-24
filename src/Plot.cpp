//
//  Plot.cpp
//  Robot
//

#include "Plot.h"
#include <iostream>

using namespace std;

Plot::Plot(int hauteur) : hauteur(hauteur){}

ostream& operator<< (ostream& flux, Plot const& plot){
    flux << "La hauteur du plot est : " << plot.getHauteur();
    return flux;
}

int Plot::getHauteur() const{
	return this->hauteur;
}
