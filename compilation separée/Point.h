#ifndef POINT_H // ou #pragma once
#define POINT_h

//juste on déclare tout, on décrit pas le détail des fonctions, constructeurs et tout. 

//le détail se fera dans Point.cpp


class Point{
    private : 
        int x, y;


    public : 
        Point();
        Point(int a , int b);
        Point(const Point& autrePoint);


        void set(int x, int y);
        int getX();
        int getY();

        void afficherPoint();
        
};


#endif