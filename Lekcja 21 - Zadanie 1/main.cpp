#include <iostream>
#include <iomanip>


template <class T>
class Calculator
{
public:
    T add (T a, T b)
    {
        std::cout << "Values: " << a << " and " << std::fixed <<std::setprecision(1) << b << "\n";
        std::cout << a << " + " << b << " = " << a+b<< "\n";
        return a + b;
    }
    T substract (T a, T b)
    {
        std::cout << a << " - " << b << " = " << a-b<< "\n";
        return a - b;
    }
    T multiply (T a, T b)
    {
        std::cout << a << " * " << b << " = " << a*b<< "\n" <<"\n";
        return a * b;
    }
    T divide (T a, T b)
    {
        if (b != 0)
        {
        std::cout << a << " / " << b << " = " << a/b<< "\n";
        return a / b;
        }
        std::cout << "Druga liczba nie moze byc rowna 0" << "\n" << "\n";
    }
};

int main()
{
       Calculator<int> intCalculator;
       std::cout << "Int results: " << "\n";
       intCalculator.add(4,2);
       intCalculator.substract(4,2);
       intCalculator.divide(4,2);
       intCalculator.multiply(4,2);

       Calculator<double> doubleCalculator;
       std::cout << "Double results: " << "\n";
       doubleCalculator.add(3.4,2.0);
       doubleCalculator.substract(3.4,2.0);
       doubleCalculator.divide(3.4,2.0);
       doubleCalculator.multiply(3.4,2.0);

}
