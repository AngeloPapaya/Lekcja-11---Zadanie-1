#include <iostream>


int ogolnaliczbaoperacji =0;

namespace A1
{
    float CalculatePerimiter(float r)
    {
       static int k= 1;
       double pi = 3.14;
       std::cout << "Obwod kola wynosi " << 2*pi*r << ", liczba operacji liczenia obwodu kola to: " << k++ << "\n";
       ::ogolnaliczbaoperacji++;
    }
}
namespace A2
{
     float CalculatePerimiter(float a, float b)
    {
        static int k= 1;
        std::cout << "Obwod prostokata wynosi " << 2*a + 2*b << ", liczba operacji liczenia obwodu prostokata to: " << k++ << "\n";
        ::ogolnaliczbaoperacji++;
    }
}
namespace A3
{
     float CalculatePerimiter(float a, float b, float c)
    {
        static int k= 1;
        std::cout << "Obwod trapezu wynosi " << a + b + 2*c << ", liczba operacji liczenia obwodu trapezu to: " << k++ << "\n";
        ::ogolnaliczbaoperacji++;


    }
}

namespace B1
{
    float CalculateArea(float r)
    {
        static int k = 1;
        float pi = 3.14;
        std::cout << "Pole kola wynosi " << pi * (r*r) << ", liczba operacji liczenia pola kola to: " << k++ << "\n";
        ::ogolnaliczbaoperacji++;
    }

}

namespace B2
{

    float CalculateArea(float a, float b)
    {
        static int k = 1;
        std::cout << "Pole prostokata wynosi " << a*b << ", liczba operacji liczenia pola prostokata to: " << k++ << "\n";
        ::ogolnaliczbaoperacji++;
    }

}

namespace B3
{

    float CalculateArea(float a, float b, float h)
    {
        static int k = 1;
        std::cout << "Pole trapezu wynosi " << ((a + b) * h)/2 << ", liczba operacji liczenia pola trapezu to: " << k++ << "\n";
        ::ogolnaliczbaoperacji++;
;
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
            std::cout << "Ogolna liczba operacji to: " << ::ogolnaliczbaoperacji;

}
