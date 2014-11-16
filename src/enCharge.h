namespace Robot {
	class enCharge : Robot::EnRoute {

	private:
		static Robot::enCharge INSTANCE;

		enCharge();

	public:
		static Robot::enCharge getInstance();

		void avancer();

		Robot::EtatRobot tourner();

		int peser();

		void rencontrerPlot();

		void afficher();
	};
}
