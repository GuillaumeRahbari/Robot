#include "CommandeAppeler.h"

CommandeAppeler CommandeAppeler::monExemplaire("APPELER");

Commande* CommandeAppeler::constructeur(Robot* r, Invocateur* inv) {
	return new CommandeAppeler("APPELER", inv->getString());
}

void CommandeAppeler::execute() {
    vector<Commande*> commandes = Commande::macroCommandes[nom];
    for(int i=0; i<commandes.size(); i++){
        commandes[i]->execute();
    }
}

void CommandeAppeler::desexecute() {
    vector<Commande*> commandes = Commande::macroCommandes[nom];
    for(int i=commandes.size()-1; i>=0; i--){
        commandes[i]->desexecute();
    }
}