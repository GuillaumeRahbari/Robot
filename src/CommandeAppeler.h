#ifndef Commande_Appeler_h
#define Commande_Appeler_h

#include "Commande.h"

class CommandeAppeler : public Commande{
private:
	string nom;

public:
	static CommandeAppeler monExemplaire;

	CommandeAppeler(string nom) : Commande(nom) {};

	CommandeAppeler(string nom, string nomC) : Commande(nom), nom(nomC) {};

	virtual Commande* constructeur(Robot* r, Invocateur* inv);

	virtual void execute();

	virtual void desexecute();
};

#endif