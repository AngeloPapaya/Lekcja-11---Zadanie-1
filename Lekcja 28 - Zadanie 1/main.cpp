#include <iostream>

struct Point {
    double x, y;

    Point(double _x, double _y)
    {
        x = _x;
        y = _y;
    }
    Point operator +(const Point& p) const
    {
        return Point(x + p.x, y + p.y);
    }

    bool operator == (const Point& p) const
    {
        return x == p.x && y == p.y;
    }

    bool operator != (const Point& p) const
    {
        return x != p.x || y != p.y;
    }

     bool operator < (const Point& p) const
        {
            return (x * x + y * y) < (p.x * p.x + p.y * p.y);
        }

        bool operator > (const Point& p) const
        {
             return (x * x + y * y) > (p.x * p.x + p.y * p.y);
        }
         bool operator <= (const Point& p) const
        {
            return (x * x + y * y) <= (p.x * p.x + p.y * p.y);
        }

         bool operator >= (const Point& p) const
        {
            return (x * x + y * y) >= (p.x * p.x + p.y * p.y);
        }

};

int main()
{
    Point point1(1.1, 2.3);
    Point point2(1.3, 2.2);
    std::string result1;
    std::string result2;
    std::string result3;
    std::string result4;
    std::string result5;
    std::string result6;
    Point point3 = point1 + point2;
    result1 = point1 == point2 ? "p1 == p2" : "p1 != p2";
    result2 = point1 != point2 ? "p1 != p2" : "p1 == p2";
    result3 = point1 < point2 ? "p1 < p2" : "p1 >= p2";
    result4 = point1 > point2 ? "p1 > p2" : "p1 <= p2";
    result5 = point1 <= point2 ? "p1 <= p2" : "p1 > p2";
    result6 = point1 >= point2 ? "p1 >= p2" : "p1 < p2";

//Point point3 = point1 - point2;
std::cout << "Operator +: " << point3.x << ", " << point3.y << "\n";
std::cout << "Operator ==: " << result1 << "\n";
std::cout << "Operator !=: " << result2 << "\n";
std::cout << "Operator <: " << result3 << "\n";
std::cout << "Operator >: " << result4 << "\n";
std::cout << "Operator <=: " << result5 << "\n";
std::cout << "Operator >=: " << result6 << "\n";

}
