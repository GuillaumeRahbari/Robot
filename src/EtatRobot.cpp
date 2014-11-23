#include "EtatRobot.h"
#include "AVide.h"

EtatRobot EtatRobot::figer(EtatRobot e) {
	throw "Vous ne pouvez pas vous figer si vous l'êtes déjà";
}

EtatRobot EtatRobot::repartir() {
	throw "Vous ne pouvez pas repartir si vous n'êtes pas figé";
}

EtatRobot EtatRobot::tourner() {
    throw "Vous ne pouvez pas vous déplacer quand vous êtes figé";
}

void EtatRobot::saisir() {
	// TODO - implement EtatRobot::saisir
	throw "Not yet implemented";
}

void EtatRobot::avancer() {
	throw "Il est impossible d'avancer dans cet etat.";
}

EtatRobot EtatRobot::rencontrerPlot() {
	throw "Vous etes deja face a un plot";
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
