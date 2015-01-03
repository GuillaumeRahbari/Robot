#ifndef Commande_h
#define Commande_h

#include <stddef.h>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

class Commande{
public:
	// Variables
	static vector<Commande*> cmdExecutees;

	// Fonctions
	virtual void execute() = 0;

	virtual void desexecute();

	virtual Commande* constructeur();

	static map<string, Commande*>& getCommandes();

	static Commande* nouvelleCommande(string s);
	
	//erreur
	class Bad_Commande{};
	class Invalid_Desexecute{};
};

#endif