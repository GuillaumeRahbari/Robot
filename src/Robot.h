namespace Robot {
	class Robot {

	private:
		string direction;
		EtatRobot etat;
		Vue vue;
		string ordre;

	public:
		void avancer(int int_x, int int_y);

		void tourner(int String_direction);

		void saisir(int Objet_o);

		void poser();

		int peser();

		void rencontrerPlot(int Plot_p);

		int evaluerPlot();

		void figer();

		void repartir();

		void afficher();
	};
}
