#include "Robot.h"
using namespace std;

void Robot::avancer(int x, int y) {
	// TODO - implement Robot::avancer
	throw "Not yet implemented";
}

void Robot::tourner(string d) {
    etat = etat.tourner();
    ordre = "tourner" + d;
    direction = d;
}

void Robot::saisir(Objet o) {
	// TODO - implement Robot::saisir
	throw "Not yet implemented";
}

void Robot::poser() {
	// TODO - implement Robot::poser
	throw "Not yet implemented";
}

int Robot::peser() {
	// TODO - implement Robot::peser
	throw "Not yet implemented";
}

void Robot::rencontrerPlot(Plot p) {
	// TODO - implement Robot::rencontrerPlot
	throw "Not yet implemented";
}

int Robot::evaluerPlot() {
	// TODO - implement Robot::evaluerPlot
	throw "Not yet implemented";
}

void Robot::figer() {
	etat = etat.figer(etat);
}

void Robot::repartir() {
	etat = etat.repartir();
}

void Robot::afficher() {
	// TODO - implement Robot::afficher
	throw "Not yet implemented";
}

EtatRobot Robot::getEtat(){
	return etat;
}

void Robot::setEtat(EtatRobot e){
	etat = e;
}
