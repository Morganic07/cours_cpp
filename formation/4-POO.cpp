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
        //constructeur par défaut, même nom que la classe, pas de type de retour, pas de void, pas de return
        Television();

        bool allumée;;


        //méthodes pour manipuler les attributs
        void setVolume(int v);
        int getVolume();
        void setCanal(int c);
        int getCanal();
};


//on définit le constructeur en dehors de la classe, avec le nom de la classe suivi de :: et du nom du constructeur
Television::Television(){
    volume = 0;
    canal = 0;
    marque = "Samsung";
    allumée = false;
}



int main(){
    Television tv1; //constructeur par défaut appelé automatiquement
    std::cout << tv1.allumée; //renvoit false, car initialisée par le constructeur par défaut


    tv1.allumée = true; //objet.attribut = XXX , permet de modifier l'attribut d'un objet 

    return 0;
}