#include <iostream>

//POO = programmation orientée objet (ou OOp en anglais)
//POO = Définir des classes qui permettent de créer des objets, qui sont des instances de ces classes.

//une classe contient des attributs (variables) et des méthodes (fonctions) qui permettent de manipuler ces attributs.

//un constructeur est une méthode spéciale qui est appelée lors de la création d'un objet, pour initialiser ses attributs avec des valeurs par défaut.

//encapsulation : 
    //Private = les attributs et méthodes sont accessibles uniquement dans la classe
    //Public = les attributs et méthodes sont accessibles depuis l'extérieur de la classe
    //Protected = les attributs et méthodes sont accessibles dans la classe et dans les classes dérivées (héritage).



class Television{
    private:
        //attributs
        int volume;
        int canal;
        std::string marque;


    public:
        bool allumée;

        //méthodes pour manipuler les attributs
        void setVolume(int v);
        void getVolume();
        void setCanal(int c);
        void getCanal();
};


int main(){
    Television tv1; 
    tv1.allumée = true; //objet.attribut = XXX , permet de modifier l'attribut d'un objet 

    return 0;
}