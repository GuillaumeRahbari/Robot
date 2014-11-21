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
	class Figer : public EtatRobot {

	private:
		EtatRobot etat;
        
    public:
		void repartir();

		void afficher();
	};
}

#endif
