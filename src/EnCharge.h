//
//  EnCharge.h
//  Robot
//
//  Created by Guillaume Rahbari on 23/11/2014.
//  Copyright (c) 2014 Guillaume Rahbari. All rights reserved.
//

#ifndef __Robot__EnCharge__
#define __Robot__EnCharge__

#include <stdio.h>
#include "EnRoute.h"

class EnCharge : public EnRoute {
        
private:
    static EnCharge* INSTANCE;
    
    EnCharge();

public:
    virtual void ecritNom(ostream& os) const;

    static EnCharge* getInstance();
    
    virtual void avancer();
    
    virtual EtatRobot* tourner();
    
    virtual void peser();
    
    virtual EtatRobot* rencontrerPlot();
    
    virtual void afficher();
};

#endif /* defined(__Robot__EnCharge__) */


