
#include <string>
#include <iostream>
#include "forme.hpp"
#include "point.hpp"



forme::forme(point p){
	this->x = p.get_x();
	this->y = p.get_y();  //la position du point
	
}
//forme::forme(){}

void forme::translate(int a,int b){
	
	x = x + a;
	y = y + b;
}

void forme::dessin(){

}

int forme::get_x(){
	return this->x;
}

int forme::get_y(){
	return this->y;
}

int forme::get_largeur(){
	return largeur;
}

int forme::get_hauteur(){
	return hauteur;
}

char forme::get_grid(int i,int j){
	return 'x';
}
