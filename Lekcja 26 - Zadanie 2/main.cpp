#include <iostream>
#include <string>


auto lam = [count = 0](auto a, auto b) mutable
{
    std::cout << "Suma nr "<< ++count << ": " << a+b << "\n";
};


int main()

{
    lam(3,4);
    lam(8.5,1.4);
    lam(std::string("Lubie "), "placki!");
}
