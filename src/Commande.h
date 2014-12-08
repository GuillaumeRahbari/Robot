#ifndef Commande_h
#define Commande_h

#include <stddef.h>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

class Commande{
public:
	static vector<Commande> listeCommandes; 

	virtual void execute();

	virtual void desexecute();

	virtual Commande constructeurVirtuel();

	static map<string, Commande*>& getCommandes();

	static vector<Commande> getListes();

	static void nouvelleCommande(string s){
		getCommandes()[s]->constructeurVirtuel().execute();
	}

	void addCommande(Commande c){
		listeCommandes.push_back(c);
	}

	//erreur
	class Bad_Commande{};
};

#endif