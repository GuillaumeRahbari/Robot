#include "ObservateurConcret.h"

void ObservateurConcret::afficher() {
	cout << "**** Etat du Robot : " + rob + " ****" << endl;
	cout << *robot << endl;
}