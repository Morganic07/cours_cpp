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
        
        //operateur d'affichage 
        friend std::ostream& operator<<(std::ostream& os, const Point& p){
            os << p.x << "," << p.y ; return os;}

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



int main(){
    //test des 3 constructeurs 

    Point p1;
    std::cout << p1 << std::endl;

    Point p2(1,2);
    std::cout << p2 << std::endl;

    Point p3(p2);
    std::cout << p3 << std::endl;


    //test de set et get 
    p3.set(2,2);
    std::cout << p3.getX() << "," << p3.getY() << std::endl;


    //test distance_origine 
    std::cout << p3.distance_origine() << std::endl;


    return 0;
}