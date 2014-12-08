#ifndef Commande_Desexecute_h
#define Commande_Desexecute_h

// #include <stddef.h>
// #include <iostream>
#include <string>
#include "Commande.h"
using namespace std;

class CommandeDesexecute : public Commande{
public:

	static CommandeDesexecute maCommande; 

	CommandeDesexecute(string);

	Commande constructeurVirtuel();

	void execute();

	void desexecute();
};


#endif