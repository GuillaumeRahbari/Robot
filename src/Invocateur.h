//
//  Invocateur.h
//  Robot
//
//  Created on 23/12/2014.
//  Copyright (c) 2014. All rights reserved.
//

#ifndef Invocateur_h
#define Invocateur_h

#include <iostream>
#include <fstream>
#include <iterator>
#include "Robot.h"

using namespace std;

class Invocateur{
private:	
	ifstream file;
	
public:
	Invocateur(string);

	void readCommandes(Robot* r);

	int getInt();

	string getString();

	//Erreur
	class Bad_Fichier{};
	
};

#endif