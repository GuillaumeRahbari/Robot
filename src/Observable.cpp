//
//  Observable.cpp
//  Robot
//


#include "Observable.h"

void Observable::notifier() {
	for(Observateur *ob : liste){
		ob -> afficher();
	}
}

void Observable::attacherAfficheur(Observateur *ob) {
	liste.push_back(ob);
}

void Observable::detacherAfficheur(Observateur *ob) {
	for (int i = 0; i < (int)liste.size(); i++){
		if (ob == liste[i]){
			liste.erase(liste.begin()+i);
		}
	}
}