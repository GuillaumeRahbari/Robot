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
	class enCharge : public EnRoute {

	private:
		static enCharge INSTANCE;

		enCharge();

	public:
		static enCharge getInstance();

		void avancer();

		EtatRobot tourner();

		int peser();

		void rencontrerPlot();

		void afficher();
	};
}

#endif
