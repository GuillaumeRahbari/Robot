//
//  Robot.cpp
//  Robot
//
//  Created by Guillaume Rahbari on 23/11/2014.
//  Copyright (c) 2014 Guillaume Rahbari. All rights reserved.
//

#include "Robot.h"
#include "AVide.h"
using namespace std;

Robot::Robot(Position pos, string dir, string ordre, Plot plot, Objet obj) :
	etat(EtatRobot::initialisation()), 
	p(pos), 
	direction(dir), 
	ordre(ordre), 
	plot(plot), 
	ob(obj)
{}

ostream& operator<< (ostream& flux, Robot const& robot){
	flux << *robot.etat << endl;
    flux << robot.p << endl;
    flux << "La direction est : " << robot.direction << endl;
    flux << robot.ob << endl;
    flux << "L'odre est : " << robot.ordre << endl;
    flux << robot.plot << endl;
    return flux;
}

void Robot::avancer(int x, int y) {
	try{
		string pox = to_string(x);
		string poy = to_string(y);
		etat->avancer();
		p.setX(x);
		p.setY(y);
		ordre = "avancer " + pox + ", " + poy;
		notifier();		
	} catch (exception e){
		cout << &e << endl;
	}
}

void Robot::tourner(string d) {
	try{
		etat = etat->tourner();
		ordre = "tourner " + d;
		direction = d;
		notifier();
	} catch (exception e){
		cout << &e << endl;
	}
}

void Robot::saisir(Objet o) {
	try{
		etat = etat->saisir();
		ob = o;
		ordre = "saisir objet";
		notifier();
	} catch (exception e){
		cout << &e << endl;
	}
}

void Robot::poser() {
	try{
		etat = etat->poser();
		ordre = "poser objet";
		notifier();
	} catch (exception e){
		cout << &e << endl;
	}
}

int Robot::peser() {
	try {
		etat->peser();
		ordre = "peser objet";
		notifier();
		return ob.getPoids();
	} catch (exception e){
		cout << &e << endl;
        return -1;
	}
}

void Robot::rencontrerPlot(Plot p) {
	try{
		etat = etat->rencontrerPlot();
		plot = p;
		ordre = "rencontrer plot";
		notifier();
	} catch (exception e){
		cout << &e << endl;
	}
}

int Robot::evaluerPlot() {
    try{
    	etat->evaluerPlot();
    	ordre = "evaluer Plot";
    	notifier();
    	return plot.getHauteur();
    } catch (exception e){
    	cout << &e << endl;
        return -1;
    }
}

void Robot::figer() {
	try{
		ordre = "figer";
		etat = etat->figer(*etat);
		notifier();
	} catch (exception e){
		cout << &e << endl;
	}
}

void Robot::repartir() {
	try{
		ordre = "repartir";
		etat = etat->repartir();
		notifier();
	} catch (exception e){
		cout << &e << endl;
	}
}

void Robot::afficher() {
	// TODO - implement Robot::afficher
	throw "Not yet implemented";
}

EtatRobot* Robot::getEtat(){
	return etat;
}

void Robot::setEtat(EtatRobot* e){
	etat = e;
}

string Robot::getOrdre(){
	return ordre;
}
