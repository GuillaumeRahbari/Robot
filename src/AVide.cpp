#include "AVide.h"

Robot::AVide* Robot::AVide::INSTANCE = NULL;

Robot::AVide::AVide() {
	// TODO - implement AVide::AVide
	throw "Not yet implemented";
}

Robot::AVide* Robot::AVide::getInstance() {
    if (!INSTANCE) {
        INSTANCE = new AVide;
    }
    return INSTANCE;
}

void Robot::AVide::avancer() {
	// TODO - implement AVide::avancer
	throw "Not yet implemented";
}

Robot::EtatRobot Robot::AVide::tourner() {
    return (EtatRobot)getInstance();
}

void Robot::AVide::rencontrerPlot() {
	// TODO - implement AVide::rencontrerPlot
	throw "Not yet implemented";
}

void Robot::AVide::afficher() {
	// TODO - implement AVide::afficher
	throw "Not yet implemented";
}
