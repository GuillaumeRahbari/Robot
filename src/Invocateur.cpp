#include "Invocateur.h"

using namespace std;

Invocateur::Invocateur(string fichier):f(fichier, ios::in){}

void Invocateur::readCommandes(){
	string chaine = "";	
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