#include "CommandeSaisir.h"

CommandeSaisir CommandeSaisir::monExemplaire("SAISIR");

Commande* CommandeSaisir::constructeur(Robot* r, Invocateur* inv) {
	Commande* cmd = new CommandeSaisir("SAISIR", r, inv->getInt());
	Commande::cmdExecutees.push_back(cmd);
    return cmd;
}

void CommandeSaisir::execute() {
    robot->saisir(o);
}

void CommandeSaisir::desexecute() {
    robot->poser();
}