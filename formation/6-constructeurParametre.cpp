#include <iostream>

//e constructeur par paramètres reçoit des valeurs au moment de la création de l'objet, et s'en sert pour initialiser directement ses attributs. Cela permet de créer des objets avec des valeurs spécifiques dès le départ, plutôt que d'utiliser des valeurs par défaut.



//on peut avoir plusieurs constructeurs dans une classe, avec des paramètres différents, c'est ce qu'on appelle la surcharge de constructeur. Cela permet de créer des objets de différentes manières, selon les besoins.


class Point{
    private:
        int x, y;

    public:
        Point(); //constructeur par défaut
        Point(int x, int y); //constructeur avec paramètres
};


//constructeur par défaut, qui initialise les attributs à 0
Point::Point(){
    x = 0;
    y = 0;
}


//les parametres (x,y) seront obligatoires à renseigner lors de la création d'un objet Point.
Point::Point(int a, int b){
    x = a;
    y = b;
}


int main(){
    Point p1; //constructeur par défaut appelé automatiquement, x = 0, y = 0
    Point p2(1,2); //constructeur avec paramètres appelé automatiquement, x = 1, y = 2

    return 0;
}