

#include <string>
#include <iostream>
#include "rectrangle.hpp"
#include "f_horizon.hpp"
#include "f_verticale.hpp"
#include "drawing.hpp"

using namespace std;
//drawing::drawing(){}

drawing::drawing(int a,int b):limitex(a),limitey(b){
	this->taux = 1;//initialiser le taux
	draw_tab= new char*[limitey];
	for (int i=0; i < limitey ; i++)  //cow
	{
		draw_tab[i] = new char[limitex];
		for (int j=0; j < limitex ; j++) //column
		{
			draw_tab[i][j] = '*';
		}
	} //initialiser le tableau 

} 

void drawing::add(rectrangle f){
	int column = f.get_largeur();
	int cow = f.get_hauteur();

	int position_x = f.get_x();
	int position_y = f.get_y();

	f.dessin();
	
	for (int i=0; i < cow ; i++)
	{
		for (int j=0; j < column ; j++)
		{
			draw_tab[position_x+i][position_y+j] = f.get_grid(i,j);
			//cout<<draw_tab[position_x+i][position_y+j]<<endl;
		}
	}

}

void drawing::add(f_horizon f){
	int column = f.get_largeur();
	int cow = f.get_hauteur();
	
	int position_x = f.get_x();
	int position_y = f.get_y();

	f.dessin();
	
	for (int i=0; i < cow ; i++)
	{
		for (int j=0; j < column ; j++)
		{
			draw_tab[position_x+i][position_y+j] = f.get_grid(i,j);
			//cout<<draw_tab[position_x+i][position_y+j]<<endl;
		}
	}

}

void drawing::add(f_verticale f){
	int column = f.get_largeur();
	int cow = f.get_hauteur();

	int position_x = f.get_x();
	int position_y = f.get_y();

	f.dessin();
	
	for (int i=0; i < cow ; i++)
	{
		for (int j=0; j < column ; j++)
		{
			draw_tab[position_x+i][position_y+j] = f.get_grid(i,j);
			//cout<<draw_tab[position_x+i][position_y+j]<<endl;
		}
	}

}

void drawing::add(drawing d){
	for (int i=0; i<d.limitey; i++)
	{
		for (int j=0; j<d.limitex; j++)
		{
			draw_tab[i][j] = d.draw_tab[i][j];
		}
	}
}
	

void drawing::scale(double taux){
	this->taux = taux ;
	draw_tab2= new char*[int (limitey*taux)];
	for (int i=0; i <int (limitey*taux) ; i++)  //cow
	{
		draw_tab2[i] = new char[int (limitex*taux)];
		for (int j=0; j < int (limitex*taux) ; j++) //column
		{
		draw_tab2[i][j] = ' ';
		}
	} //initialiser le tableau 

	for (int i=0; i < limitey ; i++)
	{
		for (int j=0; j < limitex ; j++)
		{
			draw_tab2[int (i*taux)][int (j*taux)] = draw_tab[i][j]; 
		}
	}

	for (int i=0; i <int (limitey*taux) ; i++)  //cow
	{
		
		for (int j=0; j < int (limitex*taux) ; j++) //column
		{
			cout<<draw_tab2[i][j];
		}
		cout<<endl;
	} 
}


void drawing::draw(){
	for (int i=0; i < limitey ; i++)
	{
		for (int j=0; j < limitex ; j++)
		{
			cout<<draw_tab[i][j];
		}
		cout<<endl;
	}

}
