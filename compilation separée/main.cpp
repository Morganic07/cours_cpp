#include <iostream> 
#include "Point.h"
#include "Segment.h"

int main(){
    std::cout << "s1 : "<< std::endl;
    Segment s1;
    s1.afficherSegment();


    std::cout << "s2 : "<< std::endl;

    Point p1(2,3);
    Point p2(0,1);

    Segment s2(p1, p2);
    s2.afficherSegment();



    
    

    return 0;
}   