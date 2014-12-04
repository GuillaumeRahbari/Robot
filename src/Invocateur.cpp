#include "Invocateur.h"

using namespace std;

Invocateur::Invocateur(string fichier):chaine(""), f(fichier, ios::in){}

void Invocateur::readCommandes(){
	//ifstream fichier("ListeCommandes.txt", ios::in);  // on ouvre le fichier en lecture
	if(f) {     // si l'ouverture a réussi
		while(!f.eof()){    		    
    		f >> chaine;
    		// mettre les operations a effectuer ici   		
    	}
    	f.close();   
    } else {
    	throw Invocateur::Bad_Fichier();  
	}
}

int Invocateur::getInt(){
	int number;
	f >> number;
	return number;
}