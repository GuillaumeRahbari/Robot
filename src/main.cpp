//
//  main.cpp
//  Robot
//
//  Created by Guillaume Rahbari on 15/11/2014.
//  Copyright (c) 2014 Guillaume Rahbari. All rights reserved.
//

#include <iostream>
#include "Plot.h"
#include "Position.h"
#include "Objet.h"
#include "Robot.h"
#include "Observateur.h"
#include "ObservateurConcret.h"

using namespace std;

int main(int argc, const char * argv[]) {
    Plot p(5);
    Plot p2(12);
    Plot p3(8);
    Objet obj(5);
    Objet obj2(2);
    Robot r;
    ObservateurConcret ob2(&r);
    ObservateurConcret ob(&r);
    cout << "**** Etat initial du Robot ****" << endl;
    cout << r << endl;
    r.attacherAfficheur(&ob);
    //r.attacherAfficheur(&ob2); // Possibilité de rajouter un deuxième affichage
    r.tourner("E");
    r.rencontrerPlot(p);
    try {
        r.avancer(3, 2);
    } catch (EtatRobot::Bad_Mouvement) {
        cout << "Impossible d'avancer face a un plot\n" << endl;
    }
    r.tourner("O");
    r.avancer(4, 3);
    try{
        r.repartir();
    } catch (EtatRobot::Bad_Mouvement) {
        cout << "Impossible de repartir si l'on n'est pas figé\n" << endl;
    }
    r.rencontrerPlot(p2);
    r.saisir(obj);
    r.tourner("S");
    try {
        r.poser();
    } catch (EtatRobot::Bad_Mouvement) {
        cout << "Impossible de poser un objet si l'on n'est pas face a un plot\n" << endl;
    }
    r.avancer(2, 4);
    r.rencontrerPlot(p3);
    r.poser();
    r.figer();
    try{
        r.tourner("S");
    } catch (EtatRobot::Bad_Mouvement) {
        cout << "Impossible de faire quoique ce soit quand on est figé\n" << endl;
    }
    try{
        r.avancer(8, 8);
    } catch (EtatRobot::Bad_Mouvement) {
        cout << "Impossible de faire quoique ce soit quand on est figé\n" << endl;
    }
    try{
        r.figer();
    } catch (EtatRobot::Bad_Figer) {
        cout << "Impossible de se figé quand on l'est deja\n" << endl;
    }
    r.repartir();

    return 0;
}
