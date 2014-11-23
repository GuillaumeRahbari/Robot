#include "ObservateurConcret.h"
#include "Robot.h"

void ObservateurConcret::afficher() {
	string ordre = Robot::getOrdre();
	cout << ordre << endl;
}
