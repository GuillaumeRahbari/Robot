//
//  Objet.h
//  Robot
//
//  Created by Guillaume Rahbari on 16/11/2014.
//  Copyright (c) 2014 Guillaume Rahbari. All rights reserved.
//

#ifndef Robot_Objet_h
#define Robot_Objet_h

#include <iostream>

using namespace std;

class Objet {

private:
	int poids;

public:
    Objet(int poids = 0);

    friend ostream& operator<< (ostream&, Objet const&);

	int getPoids() const;
};

#endif