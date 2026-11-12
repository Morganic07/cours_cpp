//pragma once OU ifnotdef, les 2 marchent
#pragma once
#include "Point.h"


class Segment{
    private : 
        Point A;
        Point B;
        float longueur;

    public : 
        Segment();
        Segment(Point p1, Point p2);
        Segment(const Segment& autreSegment);

        Point getA();
        Point getB();
        float getLongueur();
        void afficherSegment();


};