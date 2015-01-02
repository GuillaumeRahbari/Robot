//
//  Invocateur.cpp
//  Robot
//
//  Created on 23/12/2014.
//  Copyright (c) 2014. All rights reserved.
//

#include "Invocateur.h"

using namespace std;

Invocateur::Invocateur(string fichier) : file(fichier.c_str(), ios::in){}

/*!
 * Cette fonction permet de lire toutes les commandes présentes dans le fichier.
 * Chaque commande lue est executee.
 */
void Invocateur::readCommandes(){
	if(file) 
	{     // si l'ouverture a réussi
		while(!file.eof())
		{    		    
			string nom;
			file >> nom;
			transform (nom.begin(), nom.end(), nom.begin(), ::tolower); // transforme a chaine de caractere en minuscule.
			try
			{
				Commande::nouvelleCommande(nom)->execute();
			}
			catch (Commande::Bad_Commande)
			{
				cerr << "ERREUR : Commande Invalide" << endl;
			} 		
    	}
    	file.close();   
    } 
    else 
    {
    	throw Invocateur::Bad_Fichier();  
	}
}

/*!
 * Permet de recuperer un entier depuis le fichier.
 * \return l'entier lue.
 */
int Invocateur::getInt(){
	int number;
	file >> number;
	return number;
}

/*!
 * Permet de recuperer une chaine de caractere depuis le fichier.
 * \return la chaine de caractere lue/
 */
string Invocateur::getString(){
	string chaine;
	file >> chaine;
	return chaine;
}