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
#include "Observable.h"

class ObservateurConcret : public Observateur {
private:
	Observable* ob;
	string nom;
	
public:
	ObservateurConcret (Observable *, string s = "");
	void afficher();
};

#endif