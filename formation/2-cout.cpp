#include <iostream>

int main(){

    float nbFlottant = 10.0f+1.2f;
    double nbUser = 0;


    //std signifie qu'on prend la fonction cout qui est dans la biblio "std", ca permet d'éviter le conflit entre les noms de fonctions, qui peuvent être les mm dans différentes bibliotheques 
    std::cout << "chiffre : " << nbFlottant<< std::endl;

    //std::cout = printf
    //std::cin = scanf
    //std::endl = \n


    //scanf : 
    std::cout << "entrez 2 nombres : ";
    std::cin >> nbFlottant >> nbUser; // attention à mettre >> et pas << , ordre de flux
    std::cout << "chiffre : " << nbFlottant << "et : " << nbUser <<std::endl; 



    return 0;
}