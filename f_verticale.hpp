#ifndef __f_verticale_hpp__
#define __f_verticale_hpp__ 

#include "point.hpp"
#include "fleche.hpp"


class f_verticale : public fleche
{
/*	private:

	std::string direction;*/
	

	public:

		f_verticale(point p,std::string direction,int longeur);
		//~f_verticale();
		void dessin();

		char get_grid(int i,int j);

};

#endif