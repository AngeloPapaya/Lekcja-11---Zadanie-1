#include <iostream>



void Copy (int number)

{
    number = 5;

}

void Ref (int& number)

{
    number = 5;

}

void Pointer (int* number)

{
    int* a = number;

}



int main()
{
    int a = 0;

    Copy(a);
    std::cout << a << " ";

    Ref(a);
    std::cout << a << " ";

    Pointer(&a);
    std::cout << a;
}
