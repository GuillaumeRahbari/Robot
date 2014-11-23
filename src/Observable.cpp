#include "Observable.h"
#include <iostream>
#include "Observateur.h"

<<<<<<< HEAD
void Observable::notifier() {
	for (int i = 0; i<liste.end(); i++){
		liste[i].afficher();
=======
/*void Observable::notifier() {
	set<Observable>::iterator it = this->liste.begin();
	for (it ; it != this->operateurs.end() ; it ++){
		it -> afficher();
>>>>>>> 3b2e296a990dd9381ba7b76d48555173336e3f26
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
}*/
