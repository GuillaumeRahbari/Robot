//
//  EnRoute.cpp
//  Robot
//
//  Created by Guillaume Rahbari on 23/11/2014.
//  Copyright (c) 2014 Guillaume Rahbari. All rights reserved.
//

#include "EnRoute.h"
#include "Figer.h"

EtatRobot* EnRoute::figer(EtatRobot* e) {
    return new Figer(e);
}

void EnRoute::ecritNom(ostream& os) const{
	cout << "cc";
}
