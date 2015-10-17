#ifndef __forme_hpp__
#define __forme_hpp__ 

#include "point.hpp"

class forme
{
private:
	int x,y;
public:
	
	
	char **grid; //pour creer un tableau
	
	int largeur,hauteur;

	forme(point p);
	//~forme();

	void translate(int a,int b);
	void dessin();
	int get_x();
	int get_y();
	int get_largeur();
	int get_hauteur();
	char get_grid(int i,int j);
};

#endif 