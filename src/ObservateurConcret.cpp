#include "ObservateurConcret.h"
#include "Robot.h"

void ObservateurConcret::afficher() {
	cout << "**** Etat du Robot : " + rob + " ****" << endl;
	cout << *robot << endl;
}
