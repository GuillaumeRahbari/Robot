#ifndef Commande_Tourner_h
#define Commande_Tourner_h

#include "CommandeRobot.h"

class CommandeTourner : public CommandeRobot{
private:
	string dir;

	string oldDir;

public:
	static CommandeTourner monExemplaire;

	CommandeTourner(string nom) : CommandeRobot(nom) {};

	CommandeTourner(string nom, Robot* r, string dir) : CommandeRobot(nom, r), dir(dir) {};

	virtual Commande* constructeur(Robot* r, Invocateur* inv);

	virtual void execute();

	virtual void desexecute();
};

#endif