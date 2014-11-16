#include <string>
#include "EtatRobot.h"
#include "Vue.h"
#include "Objet.h"
#include "Plot.h"

using namespace std;

namespace Robot {
	class Robot {

	private:
		string direction;
		EtatRobot etat;
		Vue vue;
		string ordre;

	public:
		void avancer(int x, int y);

		void tourner(string direction);

		void saisir(Objet o);

		void poser();

		int peser();

		void rencontrerPlot(Plot p);

		int evaluerPlot();

		void figer();

		void repartir();

		void afficher();
	};
}
