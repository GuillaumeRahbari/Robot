//
//  EnChargeFacePlot.h
//  Robot
//
//  Created by Guillaume Rahbari on 23/11/2014.
//  Copyright (c) 2014 Guillaume Rahbari. All rights reserved.
//

#ifndef __Robot__EnChargeFacePlot__
#define __Robot__EnChargeFacePlot__

#include <stdio.h>
#include "EnRoute.h"

class EnChargeFacePlot : public EnRoute {
        
private:
    static EnChargeFacePlot* INSTANCE;
    
    EnChargeFacePlot();

public:
    virtual void ecritNom(ostream& os) const;

    static EnChargeFacePlot* getInstance();
    
    virtual EtatRobot* poser();
    
    virtual void peser();
    
    virtual EtatRobot* tourner();
    
    virtual void afficher();
};

#endif /* defined(__Robot__EnChargeFacePlot__) */
