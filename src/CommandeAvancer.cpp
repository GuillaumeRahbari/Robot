#include "CommandeAvancer.h"

CommandeAvancer CommandeAvancer::monExemplaire("AVANCER");

Commande* CommandeAvancer::constructeur(Robot* r, Invocateur* inv) {
	Commande* cmd = new CommandeAvancer("AVANCER", r, inv->getInt(), inv->getInt());
	Commande::cmdExecutees.push_back(cmd);
    return cmd;
}

void CommandeAvancer::execute() {
	oldPos = robot->getPos();
    robot->avancer(pos);
}

void CommandeAvancer::desexecute() {
    robot->avancer(oldPos);
}