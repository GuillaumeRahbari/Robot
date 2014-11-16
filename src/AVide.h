#include "EnRoute.h"

namespace Robot {
	class AVide : Robot::EnRoute {

	private:
		static Robot::AVide INSTANCE;

		AVide();

	public:
		static Robot::AVide getInstance();

		void avancer();

		Robot::EtatRobot tourner();

		void rencontrerPlot();

		void afficher();
	};
}
