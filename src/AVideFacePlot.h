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
	class AVideFacePlot : public EnRoute {

	private:
		static AVideFacePlot* INSTANCE;

		AVideFacePlot();

	public:
		static AVideFacePlot* getInstance();

		int evaluerPlot();

		EtatRobot tourner();

		void saisir();

		void afficher();
	};
}

#endif
