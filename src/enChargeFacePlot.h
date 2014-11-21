//
//  EnChargeFacePlot.h
//  Robot
//
//  Created by Guillaume Rahbari on 16/11/2014.
//  Copyright (c) 2014 Guillaume Rahbari. All rights reserved.
//

#ifndef Robot_EnChargeFacePlot_h
#define Robot_EnChargeFacePlot_h

#include "EnRoute.h"

namespace Robot {
	class EnChargeFacePlot : public EnRoute {

	private:
		static EnChargeFacePlot* INSTANCE;

		EnChargeFacePlot();

	public:
		static EnChargeFacePlot* getInstance();

		void poser();

		int peser();

		EtatRobot tourner();

		void afficher();
	};
}

#endif