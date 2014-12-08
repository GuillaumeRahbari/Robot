#include <iostream>
#include "Robot.h"
#include "ObservateurConcret.h"
#include "Invocateur.h"

using namespace std;

int main(int argc, const char * argv[]) {
	try{
		Invocateur i("ListeCommand.txt"); // Le fichier a ouvrir.
		i.readCommandes();
	} catch (Invocateur::Bad_Fichier){
		cerr << "Le fichier choisi n'existe pas" << endl;
	}

	return 0;
}