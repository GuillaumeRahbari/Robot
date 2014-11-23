//
//  EnChargeFacePlot.cpp
//  Robot
//
//  Created by Guillaume Rahbari on 23/11/2014.
//  Copyright (c) 2014 Guillaume Rahbari. All rights reserved.
//

#include "EnChargeFacePlot.h"
#include "EnCharge.h"
#include "AVideFacePlot.h"

EnChargeFacePlot* EnChargeFacePlot::INSTANCE = new EnChargeFacePlot();

EnChargeFacePlot::EnChargeFacePlot(){}

ostream& operator<< (ostream& flux, EnChargeFacePlot const& enchargeFacePlot){
    return flux << "Etat : EnChargeFacePlot";
}

EnChargeFacePlot* EnChargeFacePlot::getInstance() {
    return INSTANCE;
}

EtatRobot EnChargeFacePlot::poser() {
    return *AVideFacePlot::getInstance();
}

void EnChargeFacePlot::peser() {
}

EtatRobot EnChargeFacePlot::tourner() {
    return *EnCharge::getInstance();
}

void EnChargeFacePlot::afficher() {
    // TODO - implement EnChargeFacePlot::afficher
    throw "Not yet implemented";
}
