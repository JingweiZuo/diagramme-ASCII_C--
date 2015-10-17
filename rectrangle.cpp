
#include <string>
#include <iostream>
#include "forme.hpp"
#include "point.hpp"
#include "rectrangle.hpp"



//rectrangle::rectrangle(){}

rectrangle::rectrangle(point p,std::string etiquette,int largeur,int hauteur):forme(p)

{
	this->hauteur = hauteur;
	this->largeur = largeur;
	this->etiquette = etiquette;

	grid = new char*[this->hauteur];
	for (int i=0; i < this->hauteur ; i++)
	{
		grid [i] = new char[this->largeur];
		for (int j=0; j < this->largeur ; j++)
		{
			grid[i][j] = '1';
		}
	}


		
}

void rectrangle::dessin(){
	
	for (int i=0; i < hauteur ; i++)
	{
		
		for (int j=0; j < largeur ; j++)
		{
			grid[i][j] = '-';
		}
	}

	grid[0][0] ='+';
	grid[0][largeur-1] ='+';
	grid[hauteur-1][0] ='+';
	grid[hauteur-1][largeur-1] ='+';
}

char rectrangle::get_grid(int i,int j){

	return grid[i][j];
}

