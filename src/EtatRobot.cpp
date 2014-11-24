//
//  EtatRobot.cpp
//  Robot
//
//  Created by Guillaume Rahbari on 23/11/2014.
//  Copyright (c) 2014 Guillaume Rahbari. All rights reserved.
//

#include "EtatRobot.h"
#include "AVide.h"

ostream& operator<< (ostream& os, const EtatRobot& etat){
	etat.ecritNom(os);
	return os;
}

void EtatRobot::ecritNom(ostream& os) const{
	cout << "cc";
}

EtatRobot* EtatRobot::figer(EtatRobot e) {
	throw Bad_Mouvement();
}

EtatRobot* EtatRobot::repartir() {
	throw Bad_Mouvement();
}

EtatRobot* EtatRobot::tourner() {
    throw Bad_Mouvement();
}

EtatRobot* EtatRobot::saisir() {
	throw Bad_Mouvement();
}

void EtatRobot::avancer() {
	throw Bad_Mouvement();
}

EtatRobot* EtatRobot::rencontrerPlot() {
	throw Bad_Mouvement();
}

void EtatRobot::evaluerPlot() {
	throw Bad_Mouvement();
}

void EtatRobot::peser() {
	throw Bad_Mouvement();
}

EtatRobot* EtatRobot::poser() {
	throw Bad_Mouvement();
}

void EtatRobot::afficher() {
	// TODO - implement EtatRobot::afficher
	throw "Not yet implemented";
}

EtatRobot* EtatRobot::initialisation(){
	return AVide::getInstance();
}
