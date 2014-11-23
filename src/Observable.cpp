#include "Observable.h"

void Observable::notifier() {
	// TODO - implement Vue::notifier
	throw "Not yet implemented";
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
