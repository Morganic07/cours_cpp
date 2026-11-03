#include <iostream>

class Cercle {
    private: 
    float x , y;
    float rayon;

    public:
    //constructeur par défaut 
    Cercle();
};


Cercle :: Cercle(){
    float x = 0;
    float y = 0;
    float rayon = 0;

    std::cout<<"constructeur par défaut, en l'absence d'info, le cercle est crée en (0,0)\n";
}


int main(){
    Cercle c1(1,1,3);
    Cercle c(0,0,1);
    std::cout<<c1.x;

    //
    return 0;
}


