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

class AVide : public EnRoute {

	private:
		static AVide* INSTANCE;

		AVide();

	public:
        friend ostream& operator<< (ostream&, AVide const&);
    
		static AVide* getInstance();

		bool avancer();

		EtatRobot tourner();

		void rencontrerPlot();

		void afficher();
};

#endif
