//
//  AVideFacePlot.cpp
//  Robot
//
//  Created by Guillaume Rahbari on 23/11/2014.
//  Copyright (c) 2014 Guillaume Rahbari. All rights reserved.
//

#include "AVideFacePlot.h"

AVideFacePlot* AVideFacePlot::INSTANCE = new AVideFacePlot();

AVideFacePlot::AVideFacePlot() {}

ostream& operator<< (ostream& flux, AVideFacePlot const& avideFacePlot){
    return flux << "Etat : AVideFacePlot";
}

AVideFacePlot* AVideFacePlot::getInstance() {
	return INSTANCE;
}

void AVideFacePlot::evaluerPlot() {
}

EtatRobot* AVideFacePlot::tourner() {
    return AVide::getInstance();
}

EtatRobot* AVideFacePlot::saisir() {
	return EnChargeFacePlot::getInstance();
}

void AVideFacePlot::ecritNom(ostream& os) const{
	os << "Le robot est dans l'etat : AVideFacePlot";
}