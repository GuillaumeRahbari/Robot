#include "CommandeRepartir.h"

CommandeRepartir CommandeRepartir::monExemplaire("REPARTIR");

Commande* CommandeRepartir::constructeur(Robot* r, Invocateur* inv) {
	Commande* cmd = new CommandeRepartir("REPARTIR", r);
	Commande::cmdExecutees.push_back(cmd);
    return cmd;
}

void CommandeRepartir::execute() {
    robot->repartir();
}

void CommandeRepartir::desexecute() {
    robot->figer();
}