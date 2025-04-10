#include <iostream>

struct Point{

    public:
        int x; 
        int y;

    double distance(Point somePoint);
};

double Point::distance(Point somePoint){

    std::cout << x << std::endl;
    std::cout << y << std::endl;

    int p2x = somePoint.x;
    int p2y = somePoint.y;

    std::cout << p2x << std::endl;
    std::cout << p2y << std::endl;

    return 3.15;

}

int main(){

    Point p1;
    Point p2;

    p1.x = 10;
    p1.y = 20;

    p2.x = 30;
    p2.y = 20;

    p1.distance(p2);

    return 0;
}