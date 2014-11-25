//
//  ObservateurConcret.cpp
//  Robot
//

#include "ObservateurConcret.h"

ObservateurConcret::ObservateurConcret (Robot* r, string s) : robot(r), rob(s) {}

void ObservateurConcret::afficher() {
	cout << "**** Etat du Robot : " + rob + " ****" << endl;
	cout << *robot << endl;
}