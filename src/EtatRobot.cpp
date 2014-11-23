#include "EtatRobot.h"
using namespace Robot;

void EtatRobot::figer() {
	throw "Vous ne pouvez pas vous figer si vous l'êtes déjà";
}

EtatRobot EtatRobot::repartir() {
	throw "Vous ne pouvez pas repartir si vous n'êtes pas figé";
}

EtatRobot EtatRobot::tourner() {
    throw "Vous ne pouvez pas vous dÃ©placer quand vous Ãªtes figÃ©";
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
