#include "Robot.h"
#include <typeinfo>
using namespace std;

Robot::Robot(Position pos, string dir, string ordre, Plot plot, Objet obj) :
etat(*EtatRobot::initialisation()), p(pos), direction(dir), ordre(ordre), plot(plot), ob(obj){}

ostream& operator<< (ostream& flux, Robot const& robot){
    flux << (&robot.etat) <<endl;
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
	try{
		etat = etat.tourner();
		ordre = "tourner " + d;
		direction = d;
		plot = NULL;
	} catch (exception e){
		cout << &e << endl;
	}
}

void Robot::saisir(Objet o) {
	try{
		etat = etat.saisir();
		ob = o;
	} catch (exception e){
		cout << &e << endl;
	}
}

void Robot::poser() {
	try{
		etat = etat.poser();
		ob = NULL;
	} catch (exception e){
		cout << &e << endl;
	}
}

int Robot::peser() {
	try {
		etat.peser();
		return ob.getPoids();
	} catch (exception e){
		cout << &e << endl;
        return -1;
	}
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
    try{
    	etat.evaluerPlot();
    	return plot.getHauteur();
    } catch (exception e){
    	cout << &e << endl;
        return -1;
    }
}

void Robot::figer() {
	try{
		etat = etat.figer(etat);
	} catch (exception e){
		cout << &e << endl;
	}
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
