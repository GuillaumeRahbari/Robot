//
//  ObservateurConcret.cpp
//  Robot
//

#include "ObservateurConcret.h"

ObservateurConcret::ObservateurConcret (Observable* o, string s) : ob(o), nom(s) {}

void ObservateurConcret::afficher() {
	cout << "**** Etat de l'objet : " + nom + " ****" << endl;
	ob -> afficher();
}