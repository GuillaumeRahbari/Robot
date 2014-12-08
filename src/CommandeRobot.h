#ifndef Commande_Robot_h
#define Commande_Robot_h

// #include <stddef.h>
// #include <iostream>
#include "Commande.h"
#include "Robot.h"

class CommandeRobot : public Commande{	
protected:
	Robot *robot;

public:
	virtual void execute();

	virtual void desexecute();

	virtual Commande constructeurVirtuel();

	class Bad_Commande{};
};

#endif