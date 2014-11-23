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

namespace Robot {
    class EnCharge : public EnRoute {
        
    private:
        static EnCharge* INSTANCE;
        
        EnCharge();
        
    public:
        static EnCharge* getInstance();
        
        void avancer();
        
        EtatRobot tourner();
        
        int peser();
        
        void rencontrerPlot();
        
        void afficher();
    };
}

#endif /* defined(__Robot__EnCharge__) */


