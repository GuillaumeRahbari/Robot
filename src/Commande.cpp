#include "Commande.h"

vector<Commande> Commande::listeCommandes;

map<string, Commande*>& Commande::getCommandes(){
	static map<string, Commande*>* commandes = new map<string, Commande*>;		
	return *commandes;
}

void Commande::execute(){
	cout << "je suis dans commande" << endl;
	// throw Bad_Commande();
}

void Commande::desexecute(){
	throw Bad_Commande();
}

Commande Commande::constructeurVirtuel(){
	throw Bad_Commande();
}