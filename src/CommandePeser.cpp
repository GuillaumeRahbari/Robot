#include "CommandePeser.h"

CommandePeser CommandePeser::maCommande("PESER");

CommandePeser::CommandePeser(string s){
	Commande::getCommandes()[s] = this;
}

void CommandePeser::execute(){
	Commande::listeCommandes.push_back(*this);
	cout << "salut je suis ici" << endl;
	//r.peser();
}

void CommandePeser::desexecute(){
}

Commande CommandePeser::constructeurVirtuel(){
	return *this;
}