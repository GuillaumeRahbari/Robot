#include "CommandeRobot.h"

Commande CommandeRobot::constructeurVirtuel(){
	throw CommandeRobot::Bad_Commande();
}

void CommandeRobot::execute(){
	throw CommandeRobot::Bad_Commande();
}

void CommandeRobot::desexecute(){
	throw CommandeRobot::Bad_Commande();
}