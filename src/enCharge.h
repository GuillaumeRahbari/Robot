//
//  enCharge.h
//  Robot
//
//  Created by Guillaume Rahbari on 16/11/2014.
//  Copyright (c) 2014 Guillaume Rahbari. All rights reserved.
//

#ifndef Robot_enCharge_h
#define Robot_enCharge_h

#include "EnRoute.h"

namespace Robot {
	class enCharge : Robot::EnRoute {

	private:
		static Robot::enCharge INSTANCE;

		enCharge();

	public:
		static Robot::enCharge getInstance();

		void avancer();

		Robot::EtatRobot tourner();

		int peser();

		void rencontrerPlot();

		void afficher();
	};
}

#endif
