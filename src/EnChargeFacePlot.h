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

namespace Robot {
    class EnChargeFacePlot : public EnRoute {
        
    private:
        static EnChargeFacePlot* INSTANCE;
        
        EnChargeFacePlot();
        
    public:
        static EnChargeFacePlot* getInstance();
        
        void poser();
        
        int peser();
        
        EtatRobot tourner();
        
        void afficher();
    };
}

#endif /* defined(__Robot__EnChargeFacePlot__) */