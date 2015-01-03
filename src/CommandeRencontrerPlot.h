#ifndef Commande_RencontrerPlot_h
#define Commande_RencontrerPlot_h

#include "CommandeRobot.h"

class CommandeRencontrerPlot : public CommandeRobot{
private:
	Plot p;

public:
	static CommandeRencontrerPlot monExemplaire;

	CommandeRencontrerPlot(string nom) : CommandeRobot(nom) {};

	CommandeRencontrerPlot(string nom, Robot* r, int hauteur) : CommandeRobot(nom, r), p(hauteur) {};

	virtual Commande* constructeur(Robot* r, Invocateur* inv);

	virtual void execute();
};

#endif