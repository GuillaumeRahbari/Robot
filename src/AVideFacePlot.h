#include "EnRoute.h"

namespace Robot {
	class AVideFacePlot : Robot::EnRoute {

	private:
		static Robot::AVideFacePlot INSTANCE;

		AVideFacePlot();

	public:
		static Robot::AVideFacePlot getInstance();

		int evaluerPlot();

		Robot::EtatRobot tourner();

		void saisir();

		void afficher();
	};
}
