#include "Robot.h"
using namespace std;

void Robot::avancer(int x, int y) {
	try{
		etat.avancer();
		p.setX(x);
		p.setY(y);
	} catch (exception &e){
		cout << e << endl;
	}
}

void Robot::tourner(string d) {
    etat = etat.tourner();
    ordre = "tourner" + d;
    direction = d;
    plot = NULL;
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
	etat = etat.rencontrerPlot(p);
	plot = p;
}

int Robot::evaluerPlot() {
	return etat.evaluerPlot();
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
