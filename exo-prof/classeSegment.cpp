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
    void affichePoint(){
        std::cout << "(" << x << ", " << y << ")" << std::endl;
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

    //fonction get et set 
    Point getA(){ return A; }
    Point getB(){ return B; }
    float getLongueur(){ return calculerLongueur(); }

    //fonction affichage 
    void afficheSegment(){
        A.affichePoint();
        B.affichePoint();
        std::cout << calculerLongueur() << std::endl;
    }

    //calculer la longueur d'un segment
    float calculerLongueur();

};

//constructeur par défaut 
Segment::Segment(){A.set(0,0); B.set(0,0); longueur = calculerLongueur();}

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



float Segment::calculerLongueur(){
        int dx = B.getX() - A.getX();
        int dy = B.getY() - A.getY();
        longueur = std::sqrt(dx * dx + dy * dy);
        return longueur;
    }




//_________________________________________________________
//_________________________________________________________
//_________________________________________________________



int main() {
    Point origine;
    Point point1(3, 4);
    Point point2(6, 8);

    std::cout << "Points : ";
    origine.affichePoint();
    std::cout << " et ";
    point1.affichePoint();
    std::cout << std::endl;

    Segment segmentDefaut;
    Segment segment(point1, point2);

    std::cout << "Segment par défaut : ";
    segmentDefaut.afficheSegment();
    std::cout << "Segment entre ";
    segment.afficheSegment();
    std::cout << "Longueur : " << segment.getLongueur() << std::endl;

    Segment copie(segment);
    std::cout << "Copie du segment : ";
    copie.afficheSegment();

    return 0;
}