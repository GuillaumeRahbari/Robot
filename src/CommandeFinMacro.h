#ifndef Commande_Fin_Macro_h
#define Commande_Fin_Macro_h

#include "Commande.h"

class CommandeFinMacro : public Commande{
public:
	static CommandeFinMacro monExemplaire;

	CommandeFinMacro(string nom) : Commande(nom) {};

	virtual Commande* constructeur(Robot* r, Invocateur* inv);

	virtual void execute();
};

#endif