#include <iostream>
#include <cmath> 

// --- CLASSE POINT ---
class Point {
private: 
    int x;
    int y; 

public: 
    // Trois constructeurs 
    Point();
    Point(int a, int b);
    Point(const Point& autrePoint);    
    
    // Get et set
    void set(int user_x, int user_y) { x = user_x; y = user_y; }
    int getX() const { return x; }
    int getY() const { return y; }
    
    // Fonction d'affichage simple (demandée par le prof)
    void affiche(){
        std::cout << "(" << x << ", " << y << ")";
    }
};

//constructeur par défaut 
Point::Point(){
    x = 0;
    y = 0;
}

//constructeur par parametres
Point::Point(int a, int b){
    x = a;
    y = b;
}

//constructeur par copie
Point::Point(const Point& autrePoint){
    x = autrePoint.x;
    y = autrePoint.y;
}


//_________________________________________________________
//_________________________________________________________
//_________________________________________________________




class Segment {
private:
    Point A;
    Point B;
    float longueur;

public:
    // constructeurs pour Segment
    Segment();
    Segment(Point p1, Point p2);
    Segment(const Segment& autreSegment);

    float calculerLongueur();


    void setLongueur(float l) { 
        longueur = l; 
    }

    Point getA() const { return A; }
    Point getB() const { return B; }
    float getLongueur() const { return longueur; }
};

//constructeur par défaut 
Segment::Segment(){A.set(0,0); B.set(0,0); longueur = 1;}

//constructeur parametres 
Segment::Segment(Point a, Point b){
    A.set(a.getX(), a.getY());
    B.set(b.getX(), b.getY());
    longueur = calculerLongueur();
}

//constructeur copie 
Segment::Segment(const Segment& autreSegment){
    A = autreSegment.A;
    B = autreSegment.B;
    longueur = autreSegment.longueur;
}



void Segment::calculerLongueur(){
        int dx = B.getX() - A.getX();
        int dy = B.getY() - A.getY();
        longueur = std::sqrt(dx * dx + dy * dy);
    }


// --- FONCTION MAIN POUR TESTER ---
int main() {
    // Test des points avec la méthode affiche()
    Point p1;
    p1.affiche();
    std::cout << std::endl;

    Point p2(3, 4);
    p2.affiche();
    std::cout << " | Distance origine : " << p2.distance_origine() << std::endl;

    // Test des segments avec la méthode affiche()
    Segment s1; // Par défaut
    s1.affiche();
    std::cout << std::endl;

    Segment s2(Point(0, 0), Point(3, 4)); // Par paramètres
    s2.affiche();
    std::cout << std::endl;

    Segment s3(s2); // Par copie
    s3.affiche();
    std::cout << std::endl;

    // Test de modification
    s3.setA(Point(1, 1));
    s3.affiche();
    std::cout << std::endl;

    return 0;
}