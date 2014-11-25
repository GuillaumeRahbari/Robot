//
//  Objet.cpp
//  Robot
//

#include "Objet.h"

using namespace std;

Objet::Objet (int poids) : poids(poids){}

ostream& operator<< (ostream& flux, Objet const& objet){
    flux << "La poids est : " << objet.getPoids();
    return flux;
}

int Objet::getPoids() const{
	return this->poids;
}