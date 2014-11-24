//
//  Figer.cpp
//  Robot
//
//  Created by Guillaume Rahbari on 23/11/2014.
//  Copyright (c) 2014 Guillaume Rahbari. All rights reserved.
//

#include "Figer.h"

Figer::Figer(EtatRobot* e){
	etat = e;
}

void Figer::afficher() {
	// TODO - implement Figer::afficher
	throw "Not yet implemented";
}

EtatRobot* Figer::repartir(){
	return etat;
}

void Figer::ecritNom(ostream& os) const{
	os << "Le robot est dans l'etat : Figer";
}
