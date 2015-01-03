#	Makefile
# 
#	Created by Rémy Dupanloup on 23/11/2014.
#	Copyright (c) 2014 Rémy Dupanloup. All rights reserved.
#

include default.mk

ALL = prog

prog : main.o Observateur.o ObservateurConcret.o AVide.o AVideFacePlot.o EnCharge.o EnChargeFacePlot.o EnRoute.o EtatRobot.o Figer.o Objet.o Plot.o Position.o Robot.o Observable.o Commande.o Invocateur.o CommandeRobot.o CommandeDesexecute.o CommandeAvancer.o CommandeTourner.o CommandeSaisir.o CommandePoser.o CommandePeser.o CommandeRencontrerPlot.o CommandeEvaluerPlot.o CommandeFiger.o CommandeRepartir.o CommandeFinMacro.o CommandeDefMacro.o CommandeAppeler.o
	$(CXX_LINK) -o prog  main.o Observateur.o ObservateurConcret.o AVide.o AVideFacePlot.o EnCharge.o EnChargeFacePlot.o EnRoute.o EtatRobot.o Figer.o Objet.o Plot.o Position.o Robot.o Observable.o Commande.o Invocateur.o CommandeRobot.o CommandeDesexecute.o CommandeAvancer.o CommandeTourner.o CommandeSaisir.o CommandePoser.o CommandePeser.o CommandeRencontrerPlot.o CommandeEvaluerPlot.o CommandeFiger.o CommandeRepartir.o CommandeFinMacro.o CommandeDefMacro.o CommandeAppeler.o

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
Commande.o : Commande.h
Invocateur.o : Invocateur.h
CommandeRobot.o : CommandeRobot.h
CommandeDesexecute.o : CommandeDesexecute.h
CommandeAvancer.o : CommandeAvancer.h
CommandeTourner.o : CommandeTourner.h
CommandeSaisir.o : CommandeSaisir.h
CommandePoser.o : CommandePoser.h
CommandePeser.o : CommandePeser.h
CommandeRencontrerPlot.o : CommandeRencontrerPlot.h
CommandeEvaluerPlot.o : CommandeEvaluerPlot.h
CommandeRepartir.o : CommandeRepartir.h
CommandeFiger.o : CommandeFiger.h
CommandeFinMacro.o : CommandeFinMacro.h Commande.h
CommandeDefMacro.o : CommandeDefMacro.h
CommandeAppeler.o : CommandeAppeler.h

main.o : Robot.h ObservateurConcret.h Invocateur.h