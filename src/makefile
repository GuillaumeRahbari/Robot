include default.mk

ALL = prog

prog : main.o Afficheur.o Afficheur_1.o AVide.o AVideFacePlot.o EnCharge.o EnChargeFacePlot.o EnRoute.o EtatRobot.o Figer.o Objet.o Plot.o Position.o Robot.o Vue.o
	$(CXX_LINK) -o prog  main.o Afficheur.o AVide.o AVideFacePlot.o EnCharge.o EnChargeFacePlot.o EnRoute.o EtatRobot.o Figer.o Objet.o Plot.o Position.o Robot.o Vue.o

extra_all :
extra_clean :

Afficheur.o : Afficheur.h
Afficheur_1.o : Afficheur_1.h
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
Vue.o : Vue.h

main.o : Afficheur.h Afficheur_1.h AVide.h AVideFacePlot.h EnCharge.h EnChargeFacePlot.h EnRoute.h EtatRobot.h Figer.h Objet.h Plot.h Position.h Robot.h Vue.h common_defs.h