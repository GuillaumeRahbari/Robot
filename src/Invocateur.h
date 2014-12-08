#ifndef Invocateur_h
#define Invocateur_h

#include <stddef.h>
#include <iostream>
#include <string.h>
#include <fstream>
#include <iostream>

#include "Commande.h"

using namespace std;

class Invocateur{
private:	
	ifstream f;
	
public:
	Invocateur(string);

	void readCommandes();

	int getInt();

	string getString();

	//Erreur
	class Bad_Fichier{};
	
};

#endif