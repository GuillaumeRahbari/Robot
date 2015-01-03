#include "CommandeRencontrerPlot.h"

CommandeRencontrerPlot CommandeRencontrerPlot::monExemplaire("RENCONTRERPLOT");

Commande* CommandeRencontrerPlot::constructeur(Robot* r, Invocateur* inv) {
	Commande* cmd = new CommandeRencontrerPlot("RENCONTRERPLOT", r, inv->getInt());
	Commande::cmdExecutees.push_back(cmd);
    return cmd;
}

void CommandeRencontrerPlot::execute() {
    robot->rencontrerPlot(p);
}