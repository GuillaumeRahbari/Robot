#include "Commande.h"

vector<Commande*> Commande::cmdExecutees;

map<string, Commande*>& Commande::getCommandes(){
	static map<string, Commande*>* commandes = new map<string, Commande*>;		
	return *commandes;
}

Commande* Commande::nouvelleCommande (string s){
	return getCommandes()[s]->constructeur();
}

void Commande::desexecute(){
	throw Invalid_Desexecute();
}

Commande* Commande::constructeur(){
	throw Bad_Commande();
}