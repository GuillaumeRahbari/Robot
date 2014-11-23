//
//  EnChargeFacePlot.cpp
//  Robot
//
//  Created by Guillaume Rahbari on 23/11/2014.
//  Copyright (c) 2014 Guillaume Rahbari. All rights reserved.
//

#include "EnChargeFacePlot.h"
#include "EnCharge.h"

EnChargeFacePlot* EnChargeFacePlot::INSTANCE = new EnChargeFacePlot();

EnChargeFacePlot::EnChargeFacePlot(){}

EnChargeFacePlot* EnChargeFacePlot::getInstance() {
    return INSTANCE;
}

void EnChargeFacePlot::poser() {
    // TODO - implement EnChargeFacePlot::poser
    throw "Not yet implemented";
}

int EnChargeFacePlot::peser() {
    // TODO - implement EnChargeFacePlot::peser
    throw "Not yet implemented";
}

EtatRobot EnChargeFacePlot::tourner() {
    return *EnCharge::getInstance();
}

void EnChargeFacePlot::afficher() {
    // TODO - implement EnChargeFacePlot::afficher
    throw "Not yet implemented";
}
