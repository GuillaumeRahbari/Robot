#include "EtatRobot.h"
using namespace Robot;

void EtatRobot::figer() {
	throw "Vous ne pouvez pas vous figer si vous l'�tes d�j�";
}

EtatRobot EtatRobot::repartir() {
	throw "Vous ne pouvez pas repartir si vous n'�tes pas fig�";
}

EtatRobot EtatRobot::tourner() {
    throw "Vous ne pouvez pas vous déplacer quand vous êtes figé";
}

void EtatRobot::saisir() {
	// TODO - implement EtatRobot::saisir
	throw "Not yet implemented";
}

void EtatRobot::avancer() {
	// TODO - implement EtatRobot::avancer
	throw "Not yet implemented";
}

void EtatRobot::rencontrerPlot() {
	// TODO - implement EtatRobot::rencontrerPlot
	throw "Not yet implemented";
}

int EtatRobot::evaluerPlot() {
	// TODO - implement EtatRobot::evaluerPlot
	throw "Not yet implemented";
}

void EtatRobot::peser() {
	// TODO - implement EtatRobot::peser
	throw "Not yet implemented";
}

void EtatRobot::poser() {
	// TODO - implement EtatRobot::poser
	throw "Not yet implemented";
}

void EtatRobot::afficher() {
	// TODO - implement EtatRobot::afficher
	throw "Not yet implemented";
}

static EtatRobot* initialisation(){
	return AVide::getInstance();
}
