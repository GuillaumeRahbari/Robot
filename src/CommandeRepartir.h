#ifndef Commande_Repartir_h
#define Commande_Repartir_h

#include "CommandeRobot.h"

class CommandeRepartir : public CommandeRobot{
public:
	static CommandeRepartir monExemplaire;

	CommandeRepartir(string nom) : CommandeRobot(nom) {};

	CommandeRepartir(string nom, Robot* r) : CommandeRobot(nom, r) {};

	virtual Commande* constructeur(Robot* r, Invocateur* inv);

	virtual void execute();

	virtual void desexecute();
};

#endif