#include <iostream>


//operateur binaire : relie deux objets, par exemple : 
// l'operateur + relie deux objets, l'operateur == relie deux objets, l'operateur < relie deux objets, etc...
// ex : a+b relie a et b



//on va créer un opérateur binaire qui va additionner les coordonnées de 2 points : 



class Point{
    private:
        int x;
        int y;
    
    
    public: 
        Point(int a, int b){x = a;y = b;}; //constructeur avec paramètres

        //opérateur+
        Point operator+(Point autrePoint);
        


        // méthodes pour afficher les résultats 
        int getX(){return x;};
        int getY(){return y;};
};

Point Point::operator+(Point autrePoint){
    return(Point(x + autrePoint.x, y + autrePoint.y));
};

int main(){
    Point p1(1, 2);
    Point p2(3, 4);
    Point p3 = p1+p2; //on utilise l'opérateur+ pour additionner les coordonnées de p1 et p2


    std::cout << p3.getX() << p3.getY() << std::endl;


    return 0;
}