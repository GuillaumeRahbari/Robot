include default.mk

ALL = prog

prog : main.o Observateur.o ObservateurConcret.o AVide.o AVideFacePlot.o EnCharge.o EnChargeFacePlot.o EnRoute.o EtatRobot.o Figer.o Objet.o Plot.o Position.o Robot.o Observable.o
	$(CXX_LINK) -o prog  main.o Observateur.o ObservateurConcret.o AVide.o AVideFacePlot.o EnCharge.o EnChargeFacePlot.o EnRoute.o EtatRobot.o Figer.o Objet.o Plot.o Position.o Robot.o Observable.o

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

main.o : Observateur.h ObservateurConcret.h AVide.h AVideFacePlot.h EnCharge.h EnChargeFacePlot.h EnRoute.h EtatRobot.h Figer.h Objet.h Plot.h Position.h Robot.h Observable.h common_defs.h