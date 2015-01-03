#include "CommandePeser.h"

CommandePeser CommandePeser::monExemplaire("PESER");

Commande* CommandePeser::constructeur(Robot* r, Invocateur* inv) {
	Commande* cmd = new CommandePeser("SAISIR", r);
	Commande::cmdExecutees.push_back(cmd);
    return cmd;
}

void CommandePeser::execute(){
	robot->peser();
}