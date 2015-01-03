#ifndef Commande_EvaluerPlot_h
#define Commande_EvaluerPlot_h

#include "CommandeRobot.h"

class CommandeEvaluerPlot : public CommandeRobot{
private:
	Objet o;

public:
	static CommandeEvaluerPlot monExemplaire;

	CommandeEvaluerPlot(string nom) : CommandeRobot(nom) {};

	CommandeEvaluerPlot(string nom, Robot* r) : CommandeRobot(nom, r) {};

	virtual Commande* constructeur(Robot* r, Invocateur* inv);

	virtual void execute();
};

#endif