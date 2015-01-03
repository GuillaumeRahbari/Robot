#include "CommandePoser.h"

CommandePoser CommandePoser::monExemplaire("POSER");

Commande* CommandePoser::constructeur(Robot* r, Invocateur* inv) {
	Commande* cmd = new CommandePoser("POSER", r);
	Commande::cmdExecutees.push_back(cmd);
    return cmd;
}

void CommandePoser::execute() {
	o = robot->getObjet();
    robot->poser();
}

void CommandePoser::desexecute() {
    robot->saisir(o);
}