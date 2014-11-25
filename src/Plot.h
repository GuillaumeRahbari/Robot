//
//  Plot.h
//  Robot
//
//  Created by Guillaume Rahbari on 16/11/2014.
//  Copyright (c) 2014 Guillaume Rahbari. All rights reserved.
//

#ifndef Robot_Plot_h
#define Robot_Plot_h

#include <iostream>

using namespace std;

class Plot {

	private:
		int hauteur;

	public:
        Plot(int hauteur = 0);
        
        friend ostream& operator<< (ostream& flux, Plot const& plot);
        
		int getHauteur() const;
};

#endif