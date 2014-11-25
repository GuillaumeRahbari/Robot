//
//  Observable.h
//  Robot
//
//  Created by Guillaume Rahbari on 16/11/2014.
//  Copyright (c) 2014 Guillaume Rahbari. All rights reserved.
//

#ifndef Robot_Observable_h
#define Robot_Observable_h

#include <vector>
#include <iostream>
#include "Observateur.h"

using namespace std;

class Observable {
private:
	vector<Observateur *> liste;

public:
	void notifier();

	void attacherAfficheur(Observateur *);

	void detacherAfficheur(Observateur *);

	virtual void afficher();

	//erreur
	class Bad_affichage{};
};

#endif