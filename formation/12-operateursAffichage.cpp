#include <iostream>



// si je crée un point p1 et que je fait cout p1 : 
//std::cout << p1 << std::endl;
//ca ne marche pas, car C++ ne connait pas Point comme il connait un char, ou un int
//donc il faut créer un output operator, en gros il faut définir le comportement de "<<" pour la classe Point


class Point{
    private:
        int x;
        int y;

    public:
        Point(int a, int b); 
        
        //voici l'output operator 
        friend std::ostream& operator<<(std::ostream& os, const Point& p){
            os << p.x << "," << p.y ;
            return os;
        }



};


/*
------------analyse de l'output operator : -----------



--> friend veut dire "tu peux accéder aux x et y privés", car "<<" n'est pas une méthode de la classe Point. 
l'opérateur "<<" est appelé par std::cout, il faudrait théoriquement ajouter la méthode operator<< à l'intérieur de la classe std::ostream de la bibliothèque standard C++. 

--> L'opérateur << doit donc être écrit en dehors de la classe sous la forme d'une fonction qui prend deux paramètres : le flux à gauche et le point à droite (operator<<(os, p)).   

--> OU alors l'opérateur<< peut être écris DANS la classe si on utilise FRIEND. 



------analyse de la fonction en détail-------


--------

        friend std::ostream& operator<<(){}



- "operator<<"" est le nom de l'operator overload (tout comme "operator+"" et "operator-"")

- ostream (Standard Output Stream) est un objet de la bibliothèque standard du C++ qui gère la façon dont les données sont envoyées vers une destination, généralement l'écran de ton terminal (via std::cout)


- on utilise "&" pour faire un passage par référence. Cela permet d'utiliser directement le véritable flux actif (comme std::cout) sans en faire une copie inutile, et de pouvoir enchaîner les affichages.

- rappel : "&" donne à la fonction l'adresse directe de l'objet original qui est en mémoire. La fonction travaille directement sur l'original, comme si tu prêtais le document physique au lieu d'en faire une photocopie.


---------

        operator<<(std::ostream& os, const Point& p)



 - std::ostream& os représente le flux de sortie, càd std::cout

 - const Point& p (à droite) : Représente l'objet Point que l'on souhaite afficher.

 - "const" pour point car on a juste besoin de lire le point. Ca permet de se protéger contre les modif accidentelles 

-------------



        {
            os << p.x << "," << p.y ;
            return os;
        }

 - On injecte dans le flux "os" la sortie à afficher dans std::cout , ici on va afficher x,y




*/



Point::Point(int a, int b){
    x = a;
    y = b;
};


int main(){
    Point p1(1,2);


    std::cout << p1 << std::endl; //comme on a dis qu'on peut utiliser "<<" pour imprimer des points, ca fonctionne


    return 0;
}