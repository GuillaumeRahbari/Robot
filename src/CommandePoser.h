#ifndef Commande_Poser_h
#define Commande_Poser_h

#include "CommandeRobot.h"

class CommandePoser : public CommandeRobot{
private:
	Objet o;

public:
	static CommandePoser monExemplaire;

	CommandePoser(string nom) : CommandeRobot(nom) {};

	CommandePoser(string nom, Robot* r) : CommandeRobot(nom, r) {};

	virtual Commande* constructeur(Robot* r, Invocateur* inv);

	virtual void execute();

	virtual void desexecute();
};

#endif