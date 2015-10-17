#include <string>
#include <iostream>
#include "forme.hpp"
#include "fleche.hpp"
#include "rectrangle.hpp"
#include "f_horizon.hpp"
#include "f_verticale.hpp"
#include "point.hpp"
#include "drawing.hpp"

using namespace std;

int main()
{

	drawing drawing1(150,150);
	drawing drawing2(100,100);
	rectrangle r1(point(0,0),"R1",10,5);
	r1.translate(0,20);
	rectrangle r2(point(30,20),"R2",10,5);
	f_horizon a1(point(20,20),"RIGHT",20);
	//f_verticale a2(point(20,20),"DOWN",20);

	drawing2.add(r1);
	drawing2.add(r2);
	drawing2.add(a1);
	//drawing.add(a2
	drawing2.scale(1.2);//agrandir et alors sortie le diagramme
	drawing1.add(drawing2);
	drawing1.draw();
	return 0;
};