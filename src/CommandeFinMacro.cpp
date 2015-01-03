#include "CommandeFinMacro.h"

CommandeFinMacro CommandeFinMacro::monExemplaire("FINMACRO");

Commande* CommandeFinMacro::constructeur(Robot* r, Invocateur* inv) {
    return this;
}

void CommandeFinMacro::execute() {
    ;
}