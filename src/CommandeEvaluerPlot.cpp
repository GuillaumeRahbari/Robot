#include "CommandeEvaluerPlot.h"

CommandeEvaluerPlot CommandeEvaluerPlot::monExemplaire("EVALUERPLOT");

Commande* CommandeEvaluerPlot::constructeur(Robot* r, Invocateur* inv) {
	Commande* cmd = new CommandeEvaluerPlot("EVALUERPLOT", r);
	Commande::cmdExecutees.push_back(cmd);
    return cmd;
}

void CommandeEvaluerPlot::execute() {
    robot->evaluerPlot();
}