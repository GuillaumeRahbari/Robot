//
//  AVideFacePlot.h
//  Robot
//
//  Created by Guillaume Rahbari on 16/11/2014.
//  Copyright (c) 2014 Guillaume Rahbari. All rights reserved.
//

#ifndef Robot_AVideFacePlot_h
#define Robot_AVideFacePlot_h

#include "EnRoute.h"

namespace Robot {
	class AVideFacePlot : Robot::EnRoute {

	private:
		static Robot::AVideFacePlot INSTANCE;

		AVideFacePlot();

	public:
		static Robot::AVideFacePlot getInstance();

		int evaluerPlot();

		Robot::EtatRobot tourner();

		void saisir();

		void afficher();
	};
}

#endif
