#include "AVide.h"
using namespace Robot;

AVide* AVide::INSTANCE = new AVide();

AVide::AVide() {
	// TODO - implement AVide::AVide
	throw "Not yet implemented";
}

AVide* AVide::getInstance() {
    return INSTANCE;
}

void AVide::avancer() {
	// TODO - implement AVide::avancer
	throw "Not yet implemented";
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
