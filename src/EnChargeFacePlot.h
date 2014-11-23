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
        friend ostream& operator<< (ostream&, EnChargeFacePlot const&);
    
        static EnChargeFacePlot* getInstance();
        
        void poser();
        
        void peser();
        
        EtatRobot tourner();
        
        void afficher();
};

#endif /* defined(__Robot__EnChargeFacePlot__) */
