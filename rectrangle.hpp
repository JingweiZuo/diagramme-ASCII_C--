#ifndef __rectrangle_hpp__
#define __rectrangle_hpp__ 

#include "point.hpp"
#include "forme.hpp"
#include <string>

class rectrangle : public forme
{
private:
	
	
	
	std::string etiquette;
	

	public:
		rectrangle(point p,std::string etiquette,int largeur,int hauteur);
		//~rectrangle();
		void dessin();
		char get_grid(int i,int j);
};

#endif