#include "CommandeDefMacro.h"

CommandeDefMacro CommandeDefMacro::monExemplaire("DEFMACRO");

Commande* CommandeDefMacro::constructeur(Robot* r, Invocateur* inv) {
	vector<Commande*> commandes;
	string nom = inv->getString();
	Commande* cmd = Commande::nouvelleCommande(inv->getString(), r, inv);
	CommandeFinMacro* fin = 0;

	while(fin == 0){
		commandes.push_back(cmd);
		cmd = Commande::nouvelleCommande(inv->getString(), r, inv);
		fin = dynamic_cast<CommandeFinMacro*>(cmd);
	}

	Commande::macroCommandes.insert(pair<string, vector<Commande*> > (nom,commandes));

    return this;
}

void CommandeDefMacro::execute() {
    ;
}