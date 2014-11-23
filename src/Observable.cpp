#include "Observable.h"

void Observable::notifier() {
	set<Observable>::iterator it = this->liste.begin();
	for (it ; it != this->operateurs.end() ; it ++){
		it -> afficher();
	}
}

void Observable::attacherAfficheur(Observateur ob) {
	liste.insert(ob);
}

void Observable::detacherAfficheur(Observateur ob) {
	if (liste.find(ob) != liste.end()){
		liste.erase(ob);
	} else {
		cout << "Cet observateur n'est pas dans la liste" << endl;
	}
}
