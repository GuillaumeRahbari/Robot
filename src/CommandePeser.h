#ifndef Commande_Peser_h
#define Commande_Peser_h

#include <string>
#include "CommandeRobot.h"

class CommandePeser : public CommandeRobot{
public:
	static CommandePeser maCommande;

	CommandePeser(string);
};

#endif