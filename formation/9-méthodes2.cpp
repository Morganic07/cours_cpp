#include <iostream>

class Personne{
    private: 
        std::string nom;
        int age;

    public:
        //constructeur par défaut
        Personne();
        void setNom(std::string n);
        std::string getNom();
        void setAge(int a);
        int getAge();
};



Personne::Personne(){
    nom = "inconnu";
    age = 0;
};


void Personne::setNom(std::string n){
    nom = n;
};
std::string Personne::getNom(){
    return nom;
};
void Personne::setAge(int a){
    age = a;
};
int Personne::getAge(){
    return age;
};  




int main(){

    Personne p1; //constructeur par défaut appelé automatiquement
    p1.setNom("momo");
    p1.setAge(20);

    std::cout << p1.getNom() << std::endl;
    std::cout << p1.getAge() << std::endl;


    return 0;
}