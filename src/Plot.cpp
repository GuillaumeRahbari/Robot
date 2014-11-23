//
//  Plot.cpp
//  Robot
//

#include "Plot.h"

Plot::Plot(int hauteur) : hauteur(hauteur){}

std::ostream& operator<< (std::ostream& flux, Plot const& plot){
    return flux << "La hauteur du plot est" << plot.getHauteur();
}

int Plot::getHauteur() const{
	return this->hauteur;
}
