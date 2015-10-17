#include <string>
#include <iostream>
#include "point.hpp"


point::point(int x,int y)
{
	this->x =x;
	this->y =y;
}
//point::~point () {

//}

int point::get_x(){
	return this->x;
}
int point::get_y(){
	return this->y;
} 