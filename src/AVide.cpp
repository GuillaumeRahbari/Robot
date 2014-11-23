#include "AVide.h"

AVide* AVide::INSTANCE = new AVide();

AVide::AVide() {}

ostream& operator<< (ostream& flux, AVide const& avide){
    return flux << "Etat : AVide";
}

AVide* AVide::getInstance() {
    return INSTANCE;
}

void AVide::avancer() {
}

EtatRobot AVide::tourner() {
    return *getInstance();
}

EtatRobot AVide::rencontrerPlot(Plot p) {
	return AVideFacePlot::*getInstance();
}

void AVide::afficher() {
	// TODO - implement AVide::afficher
	throw "Not yet implemented";
}
