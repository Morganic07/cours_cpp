#include <iostream>

int main(){

    bool condition = true;
    bool autre_condition = false;

    if (condition) {
        // code à exécuter si la condition est vraie
    } 
    else if (autre_condition) {
        // code à exécuter si l'autre condition est vraie
    }
    else {
        // code à exécuter si aucune des conditions n'est vraie
    }



    //opérateur ternaire :
    int a = 5;
    int b = 10;
    
    //l'opérateur ternaire c'est : 
    //(condition) ? "TRUE=valeur" "FAULSE=valeur" ;

    int max = (a > b) ? a : b; // si a est supérieur à b, max prend la valeur de a, sinon max prend la valeur de b


    return 0;
}