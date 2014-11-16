#include "EtatRobot.h"

namespace Robot {
	class Figer : Robot::EtatRobot {

	private:
		int etat;
        
    public:
		void repartir();

		void afficher();
	};
}
