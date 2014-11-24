//
//  EnCharge.cpp
//  Robot
//
//  Created by Guillaume Rahbari on 23/11/2014.
//  Copyright (c) 2014 Guillaume Rahbari. All rights reserved.
//

#include "EnCharge.h"
#include "EnChargeFacePlot.h"

EnCharge* EnCharge::INSTANCE = new EnCharge();

EnCharge::EnCharge (){}

void EnCharge::ecritNom(ostream& os) const{
	os << "Le robot est dans l'etat : EnCharge";
}

EnCharge* EnCharge::getInstance() {
    return INSTANCE;
}

void EnCharge::avancer() {
}

EtatRobot* EnCharge::tourner() {
    return getInstance();
}

void EnCharge::peser() {
}

EtatRobot* EnCharge::rencontrerPlot() {
    return EnChargeFacePlot::getInstance();
}

void EnCharge::afficher() {
    // TODO - implement EnCharge::afficher
    throw "Not yet implemented";
}
