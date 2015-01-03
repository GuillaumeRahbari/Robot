#include "CommandeRobot.h"

Commande* CommandeRobot::constructeur(Robot*, Invocateur* inv){
	throw CommandeRobot::Bad_Commande();
}

void CommandeRobot::execute(){
	cout << "je suis dans CommandeRobot" << endl;
	// throw Commande::Bad_Commande();
}

void CommandeRobot::desexecute(){
	throw CommandeRobot::Bad_Commande();
}