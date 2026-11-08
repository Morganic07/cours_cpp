#include <iostream>


//le constructeur de copie permet de créer des copies d'objets existants, plutôt que de créer des objets avec des valeurs par défaut ou des valeurs spécifiques.

//s'écrit de la manière suivante :
//ClassName(const CLassName& autreObjet);


//si on déclare pas de constructeur de copie, le compilateur en génère un par défaut.

class Point{
    public:
        int x, y;

        Point(); //constructeur par défaut
//      Point(const Point& autrePoint); //constructeur de copie
};

Point::Point(){
    x = 0;
    y = 0;
}

//constructeur de copie, mais on n'est pas obligé de le déclarer, le compilateur le fait automatiquement si on ne le fait pas.
/*Point::Point(const Point& autrePoint){
    x = autrePoint.x;
    y = autrePoint.y;
}*/

int main(){
    Point p1; //constructeur par défaut appelé automatiquement, x = 0, y = 0
    Point p2(p1); //constructeur de copie du compilateur, x = 0, y = 0

    std::cout << "p1 : (" << p1.x << ", " << p1.y << ")" << std::endl;
    std::cout << "p2 : (" << p2.x << ", " << p2.y << ")" << std::endl;

    return 0;
}