//
//  EnChargeFacePlot.cpp
//  Robot
//
//  Created by Guillaume Rahbari on 23/11/2014.
//  Copyright (c) 2014 Guillaume Rahbari. All rights reserved.
//

#include "EnChargeFacePlot.h"

EnChargeFacePlot* EnChargeFacePlot::INSTANCE = new EnChargeFacePlot();

EnChargeFacePlot::EnChargeFacePlot(){}

void EnChargeFacePlot::ecritNom(ostream& os) const{
	os << "Le robot est dans l'etat : EnChargeFacePlot";
}

EnChargeFacePlot* EnChargeFacePlot::getInstance() {
    return INSTANCE;
}

EtatRobot* EnChargeFacePlot::poser() {
    return AVideFacePlot::getInstance();
}

void EnChargeFacePlot::peser() {
}

EtatRobot* EnChargeFacePlot::tourner() {
    return EnCharge::getInstance();
}