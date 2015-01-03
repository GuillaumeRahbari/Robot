#include "CommandeSaisir.h"

CommandeSaisir CommandeSaisir::monExemplaire("SAISIR");

Commande* CommandeSaisir::constructeur(Robot* r, Invocateur* inv) {
    return new CommandeSaisir("SAISIR", r, inv->getInt());
}

void CommandeSaisir::execute() {
    robot->saisir(o);
}

void CommandeSaisir::desexecute() {
    robot->poser();
}