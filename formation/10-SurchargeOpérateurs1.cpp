#include <iostream>

//la surchage d'opérateurs = apprendre à son objet à réagir aux opérateurs comme : 
//(+, -, *, /) ou (==, !=, <, >, <=, >=) ou (&&, ||, !).

// Concretement : pour int somme = a + b;, le compilateur comprend tout seul comment additionner deux entiers.
//Mais si y a une classe Point avec des coordonnées x et Y, le compilateur ne sait pas ce que veut dire additionner ou inverser deux Point.   




// un operateur unaire ne concerne que 1 seul objet (exemple : -a, ++a, --a)

class Point{
    private:
        int x;
        int y;

    public:
        Point(int a, int b){x = a;y = b;}; //constructeur avec paramètres

        
        //surcharge de l'opérateur unaire -
        Point operator-();
        

        
//      Point getPoint(){return Point(x, y);};   //Une fonction C++ ne renvoie qu'une seule valeur. Ici la virgule est l'opérateur virgule : il évalue x, jette le résultat, puis renvoie seulement y. C'est ce que dit le compilateur




        int getCoord(){return x, y; };       //ATTENTION : en c++ on peut return que 1 seul truc, donc cette fonction va juste return y, pas x. Même si ca compile bien.


        int getX(){return x;};
        int getY(){return y;};


};


//définition de l'opérateur- , renvoit un nouvel objet Point avec les coordonnées inversées.
Point Point::operator-(){
        return Point(-x, -y);
    }



int main(){
    Point p1(1,2); //constructeur avec paramètres appelé automatiquement, x = 1, y = 2
    Point p2 = -p1; //appel de l'opérateur- sur l'objet, x = -1, y = -2

    std::cout << "p1 : " << p1.getCoord() << std::endl; // returnera que y, voir pourquoi plus haut 



    std::cout << "p1 : " << p1.getX() << "," << p1.getY() << std::endl;
    std::cout << "p2 : " << p2.getX() << "," << p2.getY() << std::endl;

    return 0;
}