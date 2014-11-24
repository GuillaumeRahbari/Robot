//
//  main.cpp
//  Robot
//
//  Created by Guillaume Rahbari on 15/11/2014.
//  Copyright (c) 2014 Guillaume Rahbari. All rights reserved.
//

#include <iostream>
#include "Plot.h"
#include "Position.h"
#include "Objet.h"
#include "Robot.h"
#include "Observateur.h"

using namespace std;

int main(int argc, const char * argv[]) {
    Plot p(5);
   // cout << p << endl;
    Position pos(3,2);
    //cout << pos << endl;
    Objet obj(5);
    //cout << obj << endl;
    Robot r;
    //cout << r;
    ObservateurConcret ob(&r);
    r.attacherAfficheur(&ob);
    r.avancer(4, 3);
    r.rencontrerPlot(p);

    return 0;
}
