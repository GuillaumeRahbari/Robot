#include "CommandeTourner.h"

CommandeTourner CommandeTourner::monExemplaire("TOURNER");

Commande* CommandeTourner::constructeur(Robot* r, Invocateur* inv) {
	Commande* cmd = new CommandeTourner("TOURNER", r, inv->getString());
	Commande::cmdExecutees.push_back(cmd);
    return cmd;
}

void CommandeTourner::execute() {
	oldDir = robot->getDir();
    robot->tourner(dir);
}

void CommandeTourner::desexecute() {
    robot->tourner(oldDir);
}