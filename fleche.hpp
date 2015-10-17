#ifndef __fleche_hpp__
#define __fleche_hpp__ 
#include "point.hpp"
#include "forme.hpp"


class fleche : public forme
{

	
	

public:
	std::string direction;
	fleche(point p,std::string direction);
		//~f_verticale();
	void dessin();
	char get_grid(int i,int j);
};

#endif