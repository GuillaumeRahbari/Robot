//
//  enChargeFacePlot.h
//  Robot
//
//  Created by Guillaume Rahbari on 16/11/2014.
//  Copyright (c) 2014 Guillaume Rahbari. All rights reserved.
//

#ifndef Robot_enChargeFacePlot_h
#define Robot_enChargeFacePlot_h

#include "EnRoute.h"

namespace Robot {
	class enChargeFacePlot : public EnRoute {

	private:
		static enChargeFacePlot INSTANCE;

		enChargeFacePlot();

	public:
		static enChargeFacePlot getInstance();

		void poser();

		int peser();

		EtatRobot tourner();

		void afficher();
	};
}

#endif