#include "Observable.h"
#include <iostream>
#include "Observateur.h"


void Observable::notifier() {
	for (int i = 0; i<liste.end(); i++){
		liste[i].afficher();
	}
}

void Observable::attacherAfficheur(Observateur ob) {
	liste.push_back(ob);
}

void Observable::detacherAfficheur(Observateur ob) {
	for (int i = 0; i < liste.end(); i++){
		if (liste[i] == ob){
			liste.erase(liste.begin()+i);
		}
	}
}
