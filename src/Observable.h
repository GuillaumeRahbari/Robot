//
//  Vue.h
//  Robot
//
//  Created by Guillaume Rahbari on 16/11/2014.
//  Copyright (c) 2014 Guillaume Rahbari. All rights reserved.
//

#ifndef Robot_Vue_h
#define Robot_Vue_h

#include "Observateur.h"
#include <set>

using namespace std;

class Observable {
	private:
		set<Observateur> liste;

	public:
		void notifier();

		void attacherAfficheur(Observateur);

		void detacherAfficheur(Observateur);
};

#endif
