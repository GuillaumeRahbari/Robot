//
//  Robot.h
//  Robot
//
//  Created by Guillaume Rahbari on 16/11/2014.
//  Copyright (c) 2014 Guillaume Rahbari. All rights reserved.
//

#ifndef Robot_Robot_h
#define Robot_Robot_h

#include <string>
#include "EtatRobot.h"
#include "Objet.h"
#include "Plot.h"
#include <stddef.h>
#include "Position.h"
#include "Observable.h"

using namespace std;

class Robot : public Observable{

	private:
		EtatRobot* etat;
		Position p;
		string direction;
		string ordre;
		Observable vue;
		Plot plot;
		Objet ob;

	public:
        Robot(Position pos = Position(), string dir = "N", string ordre = "", Plot plot = Plot(), Objet obj = Objet());
    
        friend ostream& operator<< (ostream&, Robot const&);   
    
		void avancer(int, int);

		void tourner(string);

		void saisir(Objet o);

		void poser();

		int peser();

		void rencontrerPlot(Plot p);

		int evaluerPlot();

		void figer();

		void repartir();

		void afficher();

		EtatRobot* getEtat();

		void setEtat(EtatRobot*);

		string getOrdre();
};

#endif
