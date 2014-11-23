#include "AVide.h"
#include "Position.h"

AVide* AVide::INSTANCE = new AVide();

AVide::AVide() {
	// TODO - implement AVide::AVide
	throw "Not yet implemented";
}

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
