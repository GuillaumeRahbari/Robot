#include "EtatRobot.h"
#include "AVide.h"

EtatRobot EtatRobot::figer(EtatRobot e) {
	throw "Vous ne pouvez pas vous figer si vous l'etes deja ";
}

EtatRobot EtatRobot::repartir() {
	throw "Vous ne pouvez pas repartir si vous n'etes pas fige";
}

EtatRobot EtatRobot::tourner() {
    throw "Vous ne pouvez pas vous deplacer quand vous etes fige";
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
	throw "Impossible d'evaluer un plot dans cet etat";
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
