#include <iostream>
#include "functions.h"

int main()

{
       // std::cout << "Podaj dwie liczby calkowite?"<< "\n";
       // int a = GetNumber();
        //int b = GetNumber();
        //Compare (a,b);
        std::cout << "Podaj dwa znaki?" << "\n";
        char c = GetSign();
        char d = GetSign();
        Compare (c,d);
        return 0;
}
