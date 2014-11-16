//
//  AVide.h
//  Robot
//
//  Created by Guillaume Rahbari on 16/11/2014.
//  Copyright (c) 2014 Guillaume Rahbari. All rights reserved.
//

#ifndef Robot_AVide_h
#define Robot_AVide_h

#include "EnRoute.h"

namespace Robot {
	class AVide : Robot::EnRoute {

	private:
		static Robot::AVide* INSTANCE;

		AVide();

	public:
		static Robot::AVide* getInstance();

		void avancer();

		Robot::EtatRobot tourner();

		void rencontrerPlot();

		void afficher();
	};
}

#endif
