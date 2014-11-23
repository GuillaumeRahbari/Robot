#include "AVideFacePlot.h"
#include "AVide.h"

AVideFacePlot* AVideFacePlot::INSTANCE = new AVideFacePlot();

AVideFacePlot::AVideFacePlot() {}

ostream& operator<< (ostream& flux, AVideFacePlot const& avideFacePlot){
    return flux << "Etat : AVideFacePlot";
}

AVideFacePlot* AVideFacePlot::getInstance() {
	return INSTANCE;
}

void AVideFacePlot::evaluerPlot() {
}

EtatRobot AVideFacePlot::tourner() {
    return *AVide::getInstance();
}

EtatRobot AVideFacePlot::saisir() {
	return *EnChargeFacePlot::getInstance();
}

void AVideFacePlot::afficher() {
	// TODO - implement AVideFacePlot::afficher
	throw "Not yet implemented";
}
