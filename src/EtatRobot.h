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

	EtatRobot* figer(EtatRobot);

	EtatRobot* repartir();

	EtatRobot* tourner();

	EtatRobot* saisir();

	void avancer();

	EtatRobot* rencontrerPlot();

	void evaluerPlot();

	void peser();

	EtatRobot* poser();

	void afficher();

	static EtatRobot* initialisation();
};

#endif
