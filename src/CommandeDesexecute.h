#ifndef Commande_Desexecute_h
#define Commande_Desexecute_h

#include <string>
#include "Commande.h"
using namespace std;

class CommandeDesexecute : public Commande{
public:
	static CommandeDesexecute monExemplaire;

	CommandeDesexecute(string nom) : Commande(nom) {};

	virtual Commande* constructeur(Robot* r, Invocateur* inv);

	virtual void execute();

	virtual void desexecute();
	
};

#endif