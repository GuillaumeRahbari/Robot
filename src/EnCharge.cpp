//
//  EnCharge.cpp
//  Robot
//
//  Created by Guillaume Rahbari on 23/11/2014.
//  Copyright (c) 2014 Guillaume Rahbari. All rights reserved.
//

#include "EnCharge.h"

EnCharge* EnCharge::INSTANCE = new EnCharge();

EnCharge::EnCharge (){}

ostream& operator<< (ostream& flux, EnCharge const& encharge){
    return flux << "Etat : EnCharge";
}

EnCharge* EnCharge::getInstance() {
    return INSTANCE;
}

void EnCharge::avancer() {
}

EtatRobot EnCharge::tourner() {
    return *getInstance();
}

int EnCharge::peser() {
    // TODO - implement EnCharge::peser
    throw "Not yet implemented";
}

EtatRobot EnCharge::rencontrerPlot() {
    return EnChargeFacePlot::*getInstance();
}

void EnCharge::afficher() {
    // TODO - implement EnCharge::afficher
    throw "Not yet implemented";
}
