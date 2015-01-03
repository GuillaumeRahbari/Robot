#ifndef Commande_h
#define Commande_h

#include <stddef.h>
#include <iostream>
#include <map>
#include <vector>
#include "Robot.h"
#include "Invocateur.h"

using namespace std;

class Commande{
public:
	// Variables
	static vector<Commande*> cmdExecutees;

	// Constructeur
	Commande (string);

	// Fonctions
	virtual void execute() = 0;

	virtual void desexecute();

	virtual Commande* constructeur(Robot* r, Invocateur* inv);

	static map<string, Commande*>& commandesInscrites();

	static Commande* nouvelleCommande(string s, Robot* r, Invocateur* inv);
	
	//erreur
	class Bad_Commande{};
	class Invalid_Desexecute{};
};

#endif