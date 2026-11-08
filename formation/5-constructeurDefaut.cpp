#include <iostream>

//un constructeur est une méthode spéciale qui est appelée lors de la création d'un objet, pour initialiser ses attributs avec des valeurs par défaut.

class Television{
    private:
        int volume;
        int canal;
        std::string marque;


    public:
        //constructeur par défaut, même nom que la classe, pas de type de retour, pas de void, pas de return
        Television();

        bool allumée;;
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
    return 0;
}