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

EtatRobot EtatRobot::saisir() {
	throw "vous ne pouvez rien saisir dans cet etat";
}

void EtatRobot::avancer() {
	throw "Il est impossible d'avancer dans cet etat.";
}

EtatRobot EtatRobot::rencontrerPlot() {
	throw "Vous etes deja face a un plot";
}

void EtatRobot::evaluerPlot() {
	throw "Impossible d'evaluer un plot dans cet etat";
}

void EtatRobot::peser() {
	throw "Vous ne pouvez rien peser si vous n'avez pas d'objet";
}

EtatRobot EtatRobot::poser() {
	throw "Vous n'avez rien a deposer";
}

void EtatRobot::afficher() {
	// TODO - implement EtatRobot::afficher
	throw "Not yet implemented";
}

EtatRobot* EtatRobot::initialisation(){
	return AVide::getInstance();
}
