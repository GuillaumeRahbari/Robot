#include "Observable.h"
#include <iostream>
#include "Observateur.h"


void Observable::notifier() {
	for (unsigned int i = 0; i < liste.size(); i++){
		liste[i] -> afficher();
	}
}

void Observable::attacherAfficheur(Observateur *ob) {
	liste.push_back(ob);
}

void Observable::detacherAfficheur(Observateur *ob) {
	for (unsigned int i = 0; i < liste.size(); i++){
		if (liste[i] == ob){
			//liste.erase(i);
		}
	}
}
