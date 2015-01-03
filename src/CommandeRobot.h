#ifndef Commande_Robot_h
#define Commande_Robot_h

#include "Commande.h"
#include "Robot.h"

class CommandeRobot : public Commande{
protected:
	Robot* robot;

public:
	CommandeRobot(string nom) : Commande(nom) {};

	CommandeRobot (string nom, Robot* r) : Commande(nom), robot(r) {};

	virtual void execute() = 0;

	virtual Commande* constructeur(Robot*, Invocateur*) = 0;
};

#endif