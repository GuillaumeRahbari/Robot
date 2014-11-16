#include "EnRoute.h"

namespace Robot {
	class enChargeFacePlot : Robot::EnRoute {

	private:
		static Robot::enChargeFacePlot INSTANCE;

		enChargeFacePlot();

	public:
		static Robot::enChargeFacePlot getInstance();

		void poser();

		int peser();

		Robot::EtatRobot tourner();

		void afficher();
	};
}
