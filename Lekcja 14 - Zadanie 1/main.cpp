#include <iostream>


namespace A1
{
    float CalculatePerimiter(float r)
    {
       double pi = 3.14;
       std::cout << "Obwod kola wynosi " << 2*pi*r << "\n";
    }
}
namespace A2
{
     float CalculatePerimiter(float a, float b)
    {
        std::cout << "Obwod prostokata wynosi " << 2*a + 2*b << "\n";
    }
}
namespace A3
{
     float CalculatePerimiter(float a, float b, float c)
    {
        std::cout << "Obwod trapezu wynosi " << a + b + 2*c << "\n";
    }
}

namespace B1
{
    float CalculateArea(float r)
    {
        float pi = 3.14;
        std::cout << "Pole kola wynosi " << pi * (r*r) << "\n";
    }

}

namespace B2
{

    float CalculateArea(float a, float b)
    {
        std::cout << "Pole prostokata wynosi " << a*b << "\n";
    }

}

namespace B3
{

    float CalculateArea(float a, float b, float h)
    {
        std::cout << "Pole trapezu wynosi " << ((a + b) * h)/2 << "\n";
    }
}

int main()
{

    for (int i = 0; i < 4; i++)
    {
            A1::CalculatePerimiter(3);
            A2::CalculatePerimiter(2,3);
            A3::CalculatePerimiter(2,3,4);

            B1::CalculateArea(3);
            B2::CalculateArea(2,3);
            B3::CalculateArea(2,3,4);
            std::cout << "\n";
    }
}
