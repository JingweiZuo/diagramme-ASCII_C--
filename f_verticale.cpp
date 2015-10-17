#include <string>
#include <iostream>
#include "f_verticale.hpp"
#include "fleche.hpp"
#include "point.hpp"

//f_verticale::~f_verticale(){}
f_verticale::f_verticale(point p,std::string direction,int longeur):fleche::fleche(p,direction){
	this->largeur =1;
	this->hauteur = longeur;
	

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

void f_verticale::dessin(){
		//grid = new char*[hauteur];
	for (int i=0; i < hauteur ; i++)
	{
		//grid [i] = new char[largeur];
		for (int j=0; j < largeur ; j++)
		{
			grid[i][j] = '|';
		}
	}
	if (direction == "DOWN")
		grid[hauteur-1][0] = 'v';
	else if (direction == "UP")
		grid[0][0] = '^';
}

char f_verticale::get_grid(int i,int j){
	return grid[i][j];
}
