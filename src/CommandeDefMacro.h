#ifndef Commande_Def_Macro_h
#define Commande_Def_Macro_h

#include "CommandeFinMacro.h"

class CommandeDefMacro : public Commande{
private:
	Objet o;

public:
	static CommandeDefMacro monExemplaire;

	CommandeDefMacro(string nom) : Commande(nom) {};

	virtual Commande* constructeur(Robot* r, Invocateur* inv);

	virtual void execute();
};

#endif