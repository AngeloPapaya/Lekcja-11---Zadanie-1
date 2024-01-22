#pragma once
#include <iostream>

template <typename Type1, typename Type2>
void Change(Type1 a, Type2 b)
{
    std::cout << b;
    std::cout << "\n";
    std::cout << a;
}
