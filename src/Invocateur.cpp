#include "Invocateur.h"

using namespace std;

Invocateur::Invocateur(string fichier):f(fichier, ios::in){}

void Invocateur::readCommandes(){
	string chaine = "";	
	if(f) {     // si l'ouverture a réussi
		while(!f.eof()){    		    
    		f >> chaine;
    		try{
    			Commande::nouvelleCommande(chaine);
    		} catch (Commande::Bad_Commande){
    			cerr << "Mauvaise commande" << endl;
    		}   		
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

string Invocateur::getString(){
	string chaine;
	f >> chaine;
	return chaine;
}