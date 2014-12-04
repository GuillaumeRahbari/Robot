#	Makefile
# 
#	Created by Rémy Dupanloup on 23/11/2014.
#	Copyright (c) 2014 Rémy Dupanloup. All rights reserved.
#

include default.mk

ALL = prog

prog : main.o Observateur.o ObservateurConcret.o AVide.o AVideFacePlot.o EnCharge.o EnChargeFacePlot.o EnRoute.o EtatRobot.o Figer.o Objet.o Plot.o Position.o Robot.o Observable.o Invocateur.o Commande.o CommandeRobot.o Desexecute.o Avancer.o
	$(CXX_LINK) -o prog  main.o Observateur.o ObservateurConcret.o AVide.o AVideFacePlot.o EnCharge.o EnChargeFacePlot.o EnRoute.o EtatRobot.o Figer.o Objet.o Plot.o Position.o Robot.o Observable.o Invocateur.o Commande.o CommandeRobot.o Desexecute.o Avancer.o

extra_all :
extra_clean :

Observateur.o : Observateur.h
ObservateurConcret.o : ObservateurConcret.h
AVide.o : AVide.h
AVideFacePlot.o : AVideFacePlot.h
EnCharge.o : EnCharge.h
EnChargeFacePlot.o : EnChargeFacePlot.h
EnRoute.o : EnRoute.h
EtatRobot.o : EtatRobot.h
Figer.o :Figer.h
Objet.o : Objet.h
Plot.o : Plot.h
Position.o : Position.h
Robot.o : Robot.h
Observable.o : Observable.h
Invocateur.o : Invocateur.h
Commande.o : Commande.h
CommandeRobot.o : CommandeRobot.h
Desexecute.o : Desexecute.h
Avancer.o : Avancer.h

main.o : Robot.h ObservateurConcret.h