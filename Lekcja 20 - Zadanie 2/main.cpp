#include <iostream>
#include <vector>
#include <cmath>

class Point {
public:
    double x, y;

    Point(double x, double y) : x(x), y(y)
    {}
};

class Triangle {
public:
    Point p1, p2, p3;

    Triangle(Point p1, Point p2, Point p3) : p1(p1), p2(p2), p3(p3)
    {}

    double distance(Point p1, Point p2)
    {
        return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
    }

    double perimeter() {
        double side1 = distance(p1, p2);
        double side2 = distance(p2, p3);
        double side3 = distance(p3, p1);
        return side1 + side2 + side3;
    }
};

class Quadrilateral {
public:
    Point p1, p2, p3, p4;

    Quadrilateral(Point p1, Point p2, Point p3, Point p4)
        : p1(p1), p2(p2), p3(p3), p4(p4)
        {}

    double distance(Point p1, Point p2)
    {
        return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
    }

    double perimeter() {
        double side1 = distance(p1, p2);
        double side2 = distance(p2, p3);
        double side3 = distance(p3, p4);
        double side4 = distance(p4, p1);
        return side1 + side2 + side3 + side4;
    }
};

class Polygon {
public:
    double perimeter;

    // Konstruktor dla trójk¹ta
    Polygon(Triangle t) : perimeter(t.perimeter())
    {}

    // Konstruktor dla czworok¹ta
    Polygon(Quadrilateral q) : perimeter(q.perimeter())
    {}

    // Konstruktor dla trzech punktów
    Polygon(Point p1, Point p2, Point p3)
    {
        Triangle t(p1, p2, p3);
        perimeter = t.perimeter();
    }

    // Konstruktor dla czterech punktów
    Polygon(Point p1, Point p2, Point p3, Point p4)
    {
        Quadrilateral q(p1, p2, p3, p4);
        perimeter = q.perimeter();
    }

    double getPerimeter()
    {
        return perimeter;
    }

};

int main() {
    Triangle t{{0, 0}, {1, 0}, {0, 1}};
    Quadrilateral q{{0, 1}, {1, 1}, {1, 0}, {0, 0}};
    Polygon p1(t);
    Polygon p2(q);
    Polygon p3{{0, 0}, {1, 0}, {0, 1}};
    Polygon p4{{0, 1}, {1, 1}, {1, 0}, {0, 0}};

    std::cout << p1.getPerimeter() << " " << p2.getPerimeter() << " " << p3.getPerimeter() << " " << p4.getPerimeter();

    return 0;
}
