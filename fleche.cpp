#include <string>
#include <iostream>
#include "fleche.hpp"
#include "forme.hpp"
#include "point.hpp"

//f_verticale::~f_verticale(){}
fleche::fleche(point p,std::string direction):forme::forme(p){
	this->direction = direction;
}

void fleche::dessin(){
		
}

char fleche::get_grid(int i,int j){
	return grid[i][j];
}