#include "EnCharge.h"
using namespace Robot;

EnCharge* EnCharge::INSTANCE = new EnCharge();

EnCharge::EnCharge() {
	// TODO - implement EnCharge::EnCharge
	throw "Not yet implemented";
}

EnCharge* EnCharge::getInstance() {
	return INSTANCE;
}

void EnCharge::avancer() {
	// TODO - implement EnCharge::avancer
	throw "Not yet implemented";
}

EtatRobot EnCharge::tourner() {
	return *getInstance();
}

int EnCharge::peser() {
	// TODO - implement EnCharge::peser
	throw "Not yet implemented";
}

void EnCharge::rencontrerPlot() {
	// TODO - implement EnCharge::rencontrerPlot
	throw "Not yet implemented";
}

void EnCharge::afficher() {
	// TODO - implement EnCharge::afficher
	throw "Not yet implemented";
}
