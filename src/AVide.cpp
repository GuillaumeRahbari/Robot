//
//  AVide.cpp
//  Robot
//
//  Created by Guillaume Rahbari on 23/11/2014.
//  Copyright (c) 2014 Guillaume Rahbari. All rights reserved.
//

#include "AVide.h"

AVide* AVide::INSTANCE = new AVide();

AVide::AVide() {}

void AVide::ecritNom(ostream& os) const{
	os << "Le robot est dans l'etat : AVide";
}

AVide* AVide::getInstance() {
    return INSTANCE;
}

void AVide::avancer() {
}

EtatRobot* AVide::tourner() {
    return AVide::getInstance();
}

EtatRobot* AVide::rencontrerPlot() {
	return AVideFacePlot::getInstance();
}

void AVide::afficher() {
	// TODO - implement AVide::afficher
	throw "Not yet implemented";
}
