#pragma once
#include <iostream>

template <typename Type1, typename Type2>
void Compare (Type1 a, Type2 b)
{
    if (a > b) std::cout << a << " jest wieksze."<< "\n";
    else if (a == b) std::cout << "a i b sa rowne."<< "\n";
    else std::cout << b << " jest wieksze."<< "\n";
}

template<>
void Compare (char a, char b)
{
    if (a > b) std::cout << a << " ma wieksza wartosc w tablicy ASCII." << "\n";
    else if (a == b) std::cout << "a i b sa rowne."<< "\n";
    else std::cout << b << " ma wieksza wartosc w tablicy ASCII."<< "\n";
}
