//
//  EtatRobot.h
//  Robot
//
//  Created by Guillaume Rahbari on 16/11/2014.
//  Copyright (c) 2014 Guillaume Rahbari. All rights reserved.
//

#ifndef Robot_EtatRobot_h
#define Robot_EtatRobot_h

#include <stddef.h>
#include <iostream>

using namespace std;

class EtatRobot {

	public:
    
	friend ostream& operator<< (ostream& os, const EtatRobot& etat);

	virtual void ecritNom(ostream& os) const;

	virtual EtatRobot* figer(EtatRobot*);

	virtual EtatRobot* repartir();

	virtual EtatRobot* tourner();

	virtual EtatRobot* saisir();

	virtual void avancer();

	virtual EtatRobot* rencontrerPlot();

	virtual void evaluerPlot();

	virtual void peser();

	virtual EtatRobot* poser();

	virtual void afficher();

	static EtatRobot* initialisation();

	// Exceptions
	class Bad_Mouvement{};
	class Bad_Figer{};
};

#endif
