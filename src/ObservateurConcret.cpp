#include "ObservateurConcret.h"
#include "Robot.h"



void ObservateurConcret::afficher() {
	cout << "****Etat du Robot****" << endl;
	cout << *robot << endl;
}
