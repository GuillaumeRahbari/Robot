#ifndef Commande_Figer_h
#define Commande_Figer_h

#include "CommandeRobot.h"

class CommandeFiger : public CommandeRobot{
public:
	static CommandeFiger monExemplaire;

	CommandeFiger(string nom) : CommandeRobot(nom) {};

	CommandeFiger(string nom, Robot* r) : CommandeRobot(nom, r) {};

	virtual Commande* constructeur(Robot* r, Invocateur* inv);

	virtual void execute();

	virtual void desexecute();
};
#endif