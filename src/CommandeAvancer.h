#ifndef Commande_Avancer_h
#define Commande_Avancer_h

#include "CommandeRobot.h"
#include "Position.h"

class CommandeAvancer : public CommandeRobot{
private:
	Position pos;

	Position oldPos;

public:
	static CommandeAvancer monExemplaire;

	CommandeAvancer(string nom) : CommandeRobot(nom) {};

	CommandeAvancer(string nom, Robot* r, int x, int y) : CommandeRobot(nom, r), pos(x,y) {};

	virtual Commande* constructeur(Robot* r, Invocateur* inv);

	virtual void execute();

	virtual void desexecute();
};

#endif