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

class EtatRobot {

	public:
		EtatRobot figer(EtatRobot);

		EtatRobot repartir();

		EtatRobot tourner();

		void saisir();

		void avancer();

		void rencontrerPlot();

		int evaluerPlot();

		void peser();

		void poser();

		void afficher();

		static EtatRobot* initialisation();
};

#endif
