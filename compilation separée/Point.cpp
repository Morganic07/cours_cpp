#include <iostream>
#include "Point.h"
// on include le header, entre ""


//on définit toutes les fonctions et tout 



//les 3 constructeurs 
Point::Point(){
    x = 0;
    y = 0;
}
Point::Point(int a, int b){
    x = a;
    y = b;
}
Point::Point(const Point& autrePoint){
    x = autrePoint.x;
    y = autrePoint.y;
}


//les méthodes get, set, affiche
int Point::getX(){return x;}

int Point::getY(){return y;}

void Point::set(int a, int b){
    x = a;
    y = b;
}

void Point::affiche(){
    std::cout << x << ";" << y << std::endl;
}   