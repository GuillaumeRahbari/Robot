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
#include "Observable.h"

using namespace std;

class Robot : public Observable{

	private:
		string direction;
		EtatRobot etat;
		Observable vue;
		string ordre;
		Position p;
		Plot plot;
		Objet ob;

	public:
        Robot(Position pos = Position(), string dir = "N", string ordre = "salut, salut !", Plot plot = Plot(), Objet obj = Objet());
    
        friend ostream& operator<< (ostream&, Robot const&);
    
    virtual void ecritNom(ostream& os) const{
        os << "mère";
    }
    
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

		EtatRobot getEtat();

		void setEtat(EtatRobot);

		string getOrdre();
};

#endif
