#include "Robot.h"
using namespace std;

Robot::Robot(Position pos, string dir, string ordre, Plot plot, Objet obj) :
etat(*EtatRobot::initialisation()), p(pos), direction(dir), ordre(ordre), plot(plot), ob(obj){}

ostream& operator<< (ostream& flux, Robot const& robot){
    flux << &robot.etat <<endl;
    flux << robot.p << endl;
    flux << robot.direction << endl;
    flux << robot.ob << endl;
    flux << robot.ordre << endl;
    flux << robot.plot << endl;
    return flux;
}

void Robot::avancer(int x, int y) {
	try{
		etat.avancer();
		p.setX(x);
		p.setY(y);
	} catch (exception e){
		cout << &e << endl;
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
	try{
		etat = etat.rencontrerPlot();
		plot = p;
	} catch (exception e){
		cout << &e << endl;
	}
}

int Robot::evaluerPlot() {
    return 0;
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
