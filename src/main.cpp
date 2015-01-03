#include <iostream>
#include "Robot.h"
#include "ObservateurConcret.h"
#include "Invocateur.h"

using namespace std;

int main(int argc, const char * argv[]) {
	Robot r;
	ObservateurConcret ob(&r, "Robot 1");
	r.attacherAfficheur(&ob);
	try{
		Invocateur i("ListeCommandes.txt"); // Le fichier a ouvrir.
		i.readCommandes(&r);
	} catch (Invocateur::Bad_Fichier){
		cerr << "Le fichier choisi n'existe pas" << endl;
	}

	return 0;
}