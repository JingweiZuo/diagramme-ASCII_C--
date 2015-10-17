#include "rectrangle.hpp"
#include "f_horizon.hpp"
#include "f_verticale.hpp"

class drawing{
	

	private:
	double taux;	
	//int x,y;//la position du point


	public:
	int limitex;int limitey;
	char **draw_tab;
	char **draw_tab2;
	drawing(int a,int b);
	//~drawing();

	void add(rectrangle f);
	void add(f_horizon f);
	void add(f_verticale f);
	void add(drawing d);
	void scale(double taux);
	void draw();
};