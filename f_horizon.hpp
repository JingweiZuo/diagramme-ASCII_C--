#ifndef __f_horizon_hpp__
#define __f_horizon_hpp__ 

#include "point.hpp"
#include "fleche.hpp"

class f_horizon : public fleche
{
/*private:
	
	std::string direction;*/
	

public:

		f_horizon(point p, std::string direction,int longeur);
		//~f_horizon();
		void dessin();

		char get_grid(int i,int j);
};

#endif