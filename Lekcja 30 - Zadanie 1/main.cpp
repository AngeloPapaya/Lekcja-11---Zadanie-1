#include<iostream>
#include <chrono>

constexpr long long CalculateFibonacci(const int n)
{
    return (n <= 1) ? n : CalculateFibonacci(n - 1) + CalculateFibonacci(n - 2);
}
// long long CalculateFibonacci(const int n)
//{
//    return (n <= 1) ? n : CalculateFibonacci(n - 1) + CalculateFibonacci(n - 2);
//}

int main()
{
      const int number = 40;
     auto start = std::chrono::high_resolution_clock::now();
     constexpr auto fibElement = CalculateFibonacci(number);
//     auto fibElement = CalculateFibonacci(number);
     auto end = std::chrono::high_resolution_clock::now();
     std::chrono::duration<double, std::milli> duration = end - start;
    std::cout << number << " element Ciagu Fibonacciego to: " << fibElement << ", a czas wykonania operacji to " << duration.count() << " ms.";
}

//Wnioski:

        //gdy uzywane sa stale wartosci to constexpr jest znacznie szybszy, bo obliczenia wykonywane sa w czasie kompilacji, w zwyklej funkcji operacje sa wykonywane
        // w czasie rzeczywistym co jest wolniejsze
