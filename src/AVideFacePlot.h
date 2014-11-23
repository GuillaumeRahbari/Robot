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

class AVideFacePlot : public EnRoute {

	private:
		static AVideFacePlot* INSTANCE;

		AVideFacePlot();

	public:
        friend ostream& operator<< (ostream&, AVideFacePlot const&);
    
		static AVideFacePlot* getInstance();

		int evaluerPlot();

		EtatRobot tourner();

		void saisir();

		void afficher();
};

#endif
