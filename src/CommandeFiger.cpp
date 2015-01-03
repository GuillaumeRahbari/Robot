#include "CommandeFiger.h"

CommandeFiger CommandeFiger::monExemplaire("FIGER");

Commande* CommandeFiger::constructeur(Robot* r, Invocateur* inv) {
	Commande* cmd = new CommandeFiger("FIGER", r);
	Commande::cmdExecutees.push_back(cmd);
    return cmd;
}

void CommandeFiger::execute() {
    robot->figer();
}

void CommandeFiger::desexecute() {
    robot->repartir();
}