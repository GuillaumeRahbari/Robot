#include "Commande.h"

vector<Commande*> Commande::cmdExecutees;

map<string, vector<Commande*> > Commande::macroCommandes;

Commande::Commande (string s){
	commandesInscrites()[s] = this;
}

map<string, Commande*>& Commande::commandesInscrites(){
	static map<string, Commande*>* commandes = new map<string, Commande*>;		
	return *commandes;
}

Commande* Commande::nouvelleCommande (string s, Robot* r, Invocateur* inv){
	return commandesInscrites()[s]->constructeur(r, inv);
}

void Commande::desexecute(){
	throw Invalid_Desexecute();
}

Commande* Commande::constructeur(Robot* r, Invocateur* inv){
	throw Bad_Commande();
}