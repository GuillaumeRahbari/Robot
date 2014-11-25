//
//  ObservateurConcret.h
//  Robot
//
//  Created by Guillaume Rahbari on 16/11/2014.
//  Copyright (c) 2014 Guillaume Rahbari. All rights reserved.
//

#ifndef Robot_ObservateurConcret_h
#define Robot_ObservateurConcret_h

#include "Observateur.h"
#include "Robot.h"

class ObservateurConcret : public Observateur {
private:
	Robot* robot;
	string rob;
	
public:
	ObservateurConcret(Robot* r, string s = ""):robot(r), rob(s){}
	void afficher();
};

#endif