//
//  Figer.h
//  Robot
//
//  Created by Guillaume Rahbari on 16/11/2014.
//  Copyright (c) 2014 Guillaume Rahbari. All rights reserved.
//

#ifndef Robot_Figer_h
#define Robot_Figer_h

#include "EtatRobot.h"

namespace Robot {
	class Figer : Robot::EtatRobot {

	private:
		int etat;
        
    public:
		void repartir();

		void afficher();
	};
}

#endif