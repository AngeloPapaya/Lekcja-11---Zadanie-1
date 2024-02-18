#include <iostream>

int main()
{
    char znak;
    std::cout << "Wprowadz pojedynczy znak: ";
    std::cin >> znak;
    std::cout << "Podany znak to '"<< znak << "'" <<", a jego kod ASCII to " << static_cast<int>(znak);
}
