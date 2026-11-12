#include <iostream> 
#include <cmath>
#include "Segment.h"


Segment::Segment(){
    A.set(0,0);
    B.set(0,0);
    longueur = 0; 
}

Segment::Segment(Point p1, Point p2){
    p1.set(p1.getX(), p1.getY());
    p2.set(p2.getX(), p2.getY());
}

Segment::Segment(const Segment& autreSegment){
    A = autreSegment.A;
    B = autreSegment.B;
    longueur = autreSegment.longueur;
}

Point Segment::getA(){
    return A;
}

Point Segment::getB(){
    return B;
}


float Segment::getLongueur(){
    longueur = std::sqrt((B.getX()-A.getX())*(B.getX()-A.getX())+(B.getY()-A.getY())*(B.getY()-A.getY()));
    return longueur;
}

void Segment::afficherSegment(){
    A.afficherPoint();
    B.afficherPoint();
    std::cout << getLongueur << std::endl; 
}