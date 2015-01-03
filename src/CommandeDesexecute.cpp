#include "CommandeDesexecute.h"

CommandeDesexecute CommandeDesexecute::monExemplaire("DESEXECUTE");

Commande* CommandeDesexecute::constructeur(Robot* r, Invocateur* inv) {
    return new CommandeDesexecute("DESEXECUTE");
}

void CommandeDesexecute::execute() {
    Commande::cmdExecutees[Commande::cmdExecutees.size()-1]->desexecute();
    Commande::cmdExecutees.pop_back();
}

void CommandeDesexecute::desexecute() {
    throw Commande::Bad_Commande();
}