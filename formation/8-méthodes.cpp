#include <iostream>

class Television{

    private:
        int volume;
        bool estAllumée;

    public:
        Television();//constructeur par défaut

        //méthodes pour manipuler les attributs
        void setVolume(int vol);
        int getVolume();
        void allumer();
};



Television::Television(){
    volume = 0;
    estAllumée = false;
}



//on va définir les méthodes en dehors de la classe, avec le nom de la classe suivi de :: et du nom de la méthode
void Television::allumer(){
    estAllumée = true;
}
void Television::setVolume(int vol){
    volume = vol;
}
int Television::getVolume(){
    return volume;
}



int main(){
    Television tv1; //constructeur par défaut appelé automatiquement
    tv1.allumer(); //estAllumée = true
    tv1.setVolume(10); //volume = 10

    return 0;
}