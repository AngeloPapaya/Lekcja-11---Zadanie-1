#include <iostream>
#include "templates.h"
#include "functions.h"

//template <typename Type1, typename Type2>
//void Change(Type1 a, Type2 b)
//{
//    std::cout << b;
//    std::cout << "\n";
//    std::cout << a;
//}
//
//
//
//
//int GetInt()
//{
//    int a;
//    std::cin >> a;
//    return a;
//    std::cout << "\n";
//}
//char GetSign()
//{
//    char a;
//    std::cin >> a;
//    return a;
//    std::cout << "\n";
//}





int main()

{
    std::cout << "Podaj dwie wartosci?" << "\n";
    char a = GetSign();
    char b = GetSign();
    std::cout << "Wartosci po zamianie:" << "\n";
    Change(a,b);


}
