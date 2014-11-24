//
//  AVideFacePlot.cpp
//  Robot
//
//  Created by Guillaume Rahbari on 23/11/2014.
//  Copyright (c) 2014 Guillaume Rahbari. All rights reserved.
//

#include "AVideFacePlot.h"
#include "AVide.h"
#include "EnChargeFacePlot.h"

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

void AVideFacePlot::afficher() {
	// TODO - implement AVideFacePlot::afficher
	throw "Not yet implemented";
}

void AVideFacePlot::ecritNom(ostream& os) const{
	os << "Le robot est dans l'etat : AVideFacePlot";
}
