#ifndef MAZE_H
#define MAZE_H

// valeurs des cases : 0 = vide, 1 = mur, 2 = entrée, 3 = sortie, 4 = agent

class Maze{
    private :
        int nbX;              // nombre de cases en X (colonnes)
        int nbY;              // nombre de cases en Y (lignes)

        int entree;           // position de l'entrée (indice dans _map)
        int sortie;           // position de la sortie (indice dans _map)

        int map[21*12];       // les cases du labyrinthe, rangées ligne par ligne

        char ascii[5];        //ascii[valeur] = caractère affiché pour cette valeur, 1 = mur 2 = entrée, 3 = sortie...


    public : 
        Maze();
        Maze(file source.mz)

    };

#endif
