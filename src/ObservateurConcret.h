//
//  Afficheur 1.h
//  Robot
//
//  Created by Guillaume Rahbari on 16/11/2014.
//  Copyright (c) 2014 Guillaume Rahbari. All rights reserved.
//

#ifndef Robot_Afficheur_1_h
#define Robot_Afficheur_1_h

#include "Observateur.h"

class ObservateurConcret : public Observateur {
private:
	Robot* robot;

public:
	ObservateurConcret(Robot* r):robot(r){}
	void afficher();
};

#endif
