#include <iostream>
#include <math.h>
#include <iomanip>
struct Point
{
    double x, y;
};



struct Triangle
{
    Point A;
    Point B;
    Point C;

    float Distance (const Point& p1, const Point& p2)
    {
        return sqrt(pow((p1.x - p2.x),2) + pow((p1.y - p2.y),2));
    }

    double Perimeter()
    {
        double sideAB = Distance(A,B);
        double sideBC = Distance(B,C);
        double sideCA = Distance(C,A);

        return sideAB + sideBC +sideCA;
    }

    double Area()

    {
        double sideAB = Distance(A,B);
        double sideBC = Distance(B,C);
        double sideCA = Distance(C,A);

        return sqrt(((sideAB + sideBC + sideCA) * (sideAB + sideBC - sideCA) * (sideAB - sideBC + sideCA) * (- sideAB + sideBC + sideCA)))/4;
    }
} triangle ;

int main()
{

std::cout << "Podaj wspolrzedne wierzcholkow: " << "\n";
std::cin >> triangle.A.x >> triangle.A.y >> triangle.B.x >> triangle.B.y >> triangle.C.x >> triangle.C.y;
std::cout << "Obwod wynosi: " << std::setprecision(3) << triangle.Perimeter() << "\n";
std::cout << "Pole: " << triangle.Area();


}
