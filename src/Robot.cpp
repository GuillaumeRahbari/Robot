//
//  Robot.cpp
//  Robot
//
//  Created by Guillaume Rahbari on 23/11/2014.
//  Copyright (c) 2014 Guillaume Rahbari. All rights reserved.
//

#include "Robot.h"

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
	flux << "L'odre est : " << robot.ordre << endl;
	flux << *robot.etat << endl;
    flux << robot.p << endl;
    flux << "La direction est : " << robot.direction << endl;
    flux << robot.ob << endl;    
    flux << robot.plot << endl;
    return flux;
}

void Robot::avancer(int x, int y) {
	try{
		ordre = "avancer en "+to_string(x)+", "+to_string(y);
		etat->avancer();
		p.setX(x);
		p.setY(y);
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
		plot = 0;
		notifier();
	} catch (exception e){
		cout << &e << endl;
	}
}

void Robot::saisir(Objet o) {
	try{
		ordre = "saisir objet";
		etat = etat->saisir();
		ob = o;
		notifier();
	} catch (exception e){
		cout << &e << endl;
	}
}

void Robot::poser() {
	try{
		ordre = "poser objet";
		etat = etat->poser();
		ob = 0;
		notifier();
	} catch (exception e){
		cout << &e << endl;
	}
}

int Robot::peser() {
	try {
		ordre = "peser objet";
		etat->peser();		
		notifier();
		return ob.getPoids();
	} catch (exception e){
		cout << &e << endl;
        return -1;
	}
}

void Robot::rencontrerPlot(Plot p) {
	try{
		ordre = "rencontrer plot";
		etat = etat->rencontrerPlot();
		plot = p;
		notifier();
	} catch (exception e){
		cout << &e << endl;
	}
}

int Robot::evaluerPlot() {
    try{
    	ordre = "evaluer plot";
    	etat->evaluerPlot();
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
		etat = etat->figer(etat);
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

void Robot::afficher(){
	cout << *this <<endl;
}