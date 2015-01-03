#ifndef Commande_Fin_Macro_h
#define Commande_Fin_Macro_h

#include "Commande.h"

class CommandeFinMacro : public Commande{
public:
	static CommandeFinMacro monExemplaire;

	CommandeFinMacro(string nom) : CommandeRobot(nom) {};

	CommandeFinMacro(string nom, Robot* r, int poids) : CommandeRobot(nom, r), o(poids) {};

	virtual Commande* constructeur(Robot* r, Invocateur* inv);

	virtual void execute();

	virtual void desexecute();
};

#endif