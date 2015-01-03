#ifndef Commande_Saisir_h
#define Commande_Saisir_h

#include "CommandeRobot.h"
#include "Objet.h"

class CommandeSaisir : public CommandeRobot{
private:
	Objet o;

public:
	static CommandeSaisir monExemplaire;

	CommandeSaisir(string nom) : CommandeRobot(nom) {};

	CommandeSaisir(string nom, Robot* r, int poids) : CommandeRobot(nom, r), o(poids) {};

	virtual Commande* constructeur(Robot* r, Invocateur* inv);

	virtual void execute();

	virtual void desexecute();
};

#endif