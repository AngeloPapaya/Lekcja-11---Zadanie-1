#include <iostream>
#include <array>

int main()
{
    std::array <int, 5> arr = {4,4,4,4,4};
    std::array <int, 5> arr2 = {3,3,3,3,3};

    std::swap(arr,arr2);

    std::cout << "Tablica 1: ";
    for (auto i = arr.begin(); i < arr.end(); i++)
        std::cout << *i << " ";

    std::cout << "\n";
    std::cout << "Tablica 2: ";
    for (auto i = arr2.begin(); i < arr2.end(); i++)
        std::cout << *i << " ";

}
