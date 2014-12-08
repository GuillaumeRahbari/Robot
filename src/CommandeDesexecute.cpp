#include "CommandeDesexecute.h"

CommandeDesexecute CommandeDesexecute::maCommande("DESEXECUTE");

CommandeDesexecute::CommandeDesexecute(string s){
	Commande::getCommandes()[s] = this;
}

void CommandeDesexecute::execute(){
	Commande::listeCommandes.back().desexecute();
	Commande::listeCommandes.pop_back();
}

void CommandeDesexecute::desexecute(){
	throw Commande::Bad_Commande();
}

Commande CommandeDesexecute::constructeurVirtuel(){
	return *this;
}