#ifndef Commande_Peser_h
#define Commande_Peser_h

#include "CommandeRobot.h"

class CommandePeser : public CommandeRobot{
public:
	static CommandePeser monExemplaire;

	CommandePeser(string nom) : CommandeRobot(nom) {};

	CommandePeser(string nom, Robot* r) : CommandeRobot(nom, r) {};

	virtual Commande* constructeur(Robot*, Invocateur* inv);

	virtual void execute();
};

#endif