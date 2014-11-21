//
//  EnCharge.h
//  Robot
//
//  Created by Guillaume Rahbari on 16/11/2014.
//  Copyright (c) 2014 Guillaume Rahbari. All rights reserved.
//

#ifndef Robot_EnCharge_h
#define Robot_EnCharge_h

#include "EnRoute.h"

namespace Robot {
	class EnCharge : public EnRoute {

	private:
		static EnCharge* INSTANCE;

		enCharge();

	public:
		static EnCharge* getInstance();

		void avancer();

		EtatRobot tourner();

		int peser();

		void rencontrerPlot();

		void afficher();
	};
}

#endif
