#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

class Maze {
private :
    int dimX;
    int dimY;
    int entree;
    int sortie;
    int agent;

    int map[21 * 12];
    char asciiMap[21 * 12];
       
public :
    Maze();                                  
    Maze(std::string filename, int x, int y);

    void afficherAscii();                    

    float distanceEuclidienne();            
    int distanceManhattan();
   
   
};

Maze::Maze() {
    dimX=21;
    dimY=12;
    entree=-1; //valeur neutre car il y a pas de -1 dans le fichier toto
    sortie=-1;
    agent=-1;
   
    for (int i=0; i<21*12; i++){
        map[i]=0;
        asciiMap[i] = ' '; // un tableau rempli de 0 est pas exploitable (aucun tableau a été chargé)
    }
}
   
Maze::Maze(std::string filename, int x, int y) {
    dimX = x;
    dimY = y;
    entree = -1;
    sortie = -1;
    agent = -1; // Pareil on initialise les valeurs à -1

    std::ifstream f(filename);
   
    for (int i = 0; i < dimX * dimY; i++) {
        f >> map[i]; // Lit la valeur suivante dans le tableau map    
       
        if (map[i]==2){
            entree=i;
        }
        if (map[i]==3){
            sortie=i;
        }
        if (map[i]==4){
            agent=i;
        }    
    }

    f.close();
}

void Maze::afficherAscii(){
    for (int i = 0; i < dimX * dimY; i++) {    
       
        if (i > 0 && i % dimX == 0){
            std::cout << std::endl;
        }

        if (map[i] == 1) {
            std::cout << "# ";
        } else if (map[i] == 0) {
            std::cout << ". ";
        } else if (map[i] == 2) {
            std::cout << "E ";
        } else if (map[i] == 3) {
            std::cout << "S ";
        } else if (map[i] == 4) {
            std::cout << "A ";
        } else {
            std::cout << "? ";
        }
    }
    std::cout << std::endl;
}

float Maze::distanceEuclidienne() {
    // Calcul des coordonnées de l'agent
    int xAgent = agent % dimX;
    int yAgent = agent / dimX;

    // Calcul des coordonnées de la sortie
    int xSortie = sortie % dimX;
    int ySortie = sortie / dimX;

    // Calcul de la distance euclidienne
    float dx = xSortie - xAgent;
    float dy = ySortie - yAgent;

    return std::sqrt(dx * dx + dy * dy);
}

int Maze::distanceManhattan() {
    int xAgent = agent % dimX;
    int yAgent = agent / dimX;

    int xSortie = sortie % dimX;
    int ySortie = sortie / dimX;

    int dx = std::abs(xSortie - xAgent);
    int dy = std::abs(ySortie - yAgent);

    return dx + dy;
}


//////////////////////////////////////////////////////////

int main() {
    Maze laby("toto.txt", 21, 12);
   
    std::cout << " Affichage du labyrinthe " << std::endl;
    laby.afficherAscii();
   
    std::cout << "Distance euclidienne agent -> sortie : " << laby.distanceEuclidienne() << std::endl;
    std::cout << "Distance de Manhattan agent -> sortie : " << laby.distanceManhattan() << std::endl;

    return 0;
}