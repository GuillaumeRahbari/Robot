#include "Observable.h"
#include <iostream>



void Observable::notifier() {
	for(Observateur *ob : liste){
		ob -> afficher();
	}
}

void Observable::attacherAfficheur(Observateur *ob) {
	liste.push_back(ob);
}

void Observable::detacherAfficheur() {
	liste.pop_back();
}
