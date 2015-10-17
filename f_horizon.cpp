
#include <string>


#include <iostream>
#include "f_horizon.hpp"
#include "point.hpp"
#include "fleche.hpp"



//~f_horizon(){}
f_horizon::f_horizon(point p,std::string direction,int longeur):fleche(p,direction)

{
	this->hauteur = 1;
	this->largeur = longeur;


	grid = new char*[this->hauteur];
	for (int i=0; i < this->hauteur ; i++)
	{
		grid [i] = new char[this->largeur];
		for (int j=0; j < this->largeur ; j++)
		{
			grid[i][j] = ' ';
		}
	}

}


void f_horizon::dessin(){
	//grid = new char*[hauteur];
	for (int i=0; i < hauteur ; i++)
	{
		//grid [i] = new char[largeur];
		for (int j=0; j < largeur-1 ; j++)
		{
			grid[i][j] = '-';
		}
	}
	if (this->direction == "RIGHT")
		grid[0][largeur-1] = '>';
	else if (this->direction == "LEFT")
		grid[0][0] = '<';
}

char f_horizon::get_grid(int i,int j){
	return grid[i][j];
}
