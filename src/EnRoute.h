//
//  EnRoute.h
//  Robot
//
//  Created by Guillaume Rahbari on 16/11/2014.
//  Copyright (c) 2014 Guillaume Rahbari. All rights reserved.
//

#ifndef Robot_EnRoute_h
#define Robot_EnRoute_h

#include "EtatRobot.h"
#include "Figer.h"

class EnRoute : public EtatRobot {

public:
	virtual EtatRobot* figer(EtatRobot*);
    
    virtual void ecritNom(ostream& os) const;
};

#endif