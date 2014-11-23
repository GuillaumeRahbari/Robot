#include "AVide.h"

AVide* AVide::INSTANCE = NULL;

AVide::AVide() {}

AVide* AVide::getInstance() {
    return INSTANCE;
}

bool AVide::avancer() {
	return true;
}

EtatRobot AVide::tourner() {
    return *getInstance();
}

void AVide::rencontrerPlot() {
	// TODO - implement AVide::rencontrerPlot
	throw "Not yet implemented";
}

void AVide::afficher() {
	// TODO - implement AVide::afficher
	throw "Not yet implemented";
}
