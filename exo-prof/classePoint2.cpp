#include <iostream>
#include <cmath> 


class Point{
    private : 
        int x;
        int y; 

    public : 
        //trois constructeurs 
        Point();
        Point(int a, int b);
        Point(const Point& autrePoint);    
        
        //get et set
        void set(int user_x, int user_y){x = user_x; y = user_y;}
        int getX(){return x;}
        int getY(){return y;}
        

        //fonction d'affichage (pas opérateur d'affichage car trop complexse selon le prof)
        void affiche();

        //distance origine
        float distance_origine(){
            return std::sqrt(x*x + y*y);
        }

};


//constructeur par défaut 
Point::Point(){
    x = 0;
    y = 0;
}

//constructeur par parametres
Point::Point(int a, int b){
    x = a;
    y = b;
}

//constructeur par copie
Point::Point(const Point& autrePoint){
    x = autrePoint.x;
    y = autrePoint.y;
}


//fonction affiche 
void Point::affiche(){
    std::cout << x << ","<< y << std::endl;
}



int main(){
    //test des 3 constructeurs 

    Point p1;
    p1.affiche();

    Point p2(1,2);
    p2.affiche();

    Point p3(p2);
    p3.affiche();


    //test de set et get 
    p3.set(2,2);
    p3.affiche();


    //test distance_origine 
    std::cout << p3.distance_origine() << std::endl;


    return 0;
}