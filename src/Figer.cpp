#include "Figer.h"
using namespace Robot;

Figer::Figer(EtatRobot e){
	etat = e;
}

void Figer::afficher() {
	// TODO - implement Figer::afficher
	throw "Not yet implemented";
}

EtatRobot Figer::repartir(){
	return etat;
}
