#include "AVideFacePlot.h"
#include "AVide.h"

AVideFacePlot* AVideFacePlot::INSTANCE = new AVideFacePlot();

AVideFacePlot::AVideFacePlot() {
	// TODO - implement AVideFacePlot::AVideFacePlot
	throw "Not yet implemented";
}

AVideFacePlot* AVideFacePlot::getInstance() {
	return INSTANCE;
}

int AVideFacePlot::evaluerPlot() {
	// TODO - implement AVideFacePlot::evaluerPlot
	throw "Not yet implemented";
}

EtatRobot AVideFacePlot::tourner() {
    return *AVide::getInstance();
}

void AVideFacePlot::saisir() {
	// TODO - implement AVideFacePlot::saisir
	throw "Not yet implemented";
}

void AVideFacePlot::afficher() {
	// TODO - implement AVideFacePlot::afficher
	throw "Not yet implemented";
}
