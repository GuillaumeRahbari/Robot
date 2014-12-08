#ifndef Commande_Robot_h
#define Commande_Robot_h

// #include <stddef.h>
// #include <iostream>
#include "Commande.h"
#include "Robot.h"

class CommandeRobot : public Commande{
public:
	static Robot r;

	virtual void execute();

	virtual void desexecute();

	virtual Commande constructeurVirtuel();

	class Bad_Commande{};
};

#endif