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
    *number = 5;

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
/*
[09:46] Bartlomiej Tybor
2gie na oko wygląda ok tylko jest nie do konca dobrze w wersji funkcji z pointerem. W poprzednich 2 przypisujesz 5 a w tej z Pointerem tworzysz zmienną w środku metody i przypisujesz jej wartosc z parametru.
[09:47] Bartlomiej Tybor
można tez pomyśleć nad lepsza nazwa metod. np setFive, setFiveRef, SetFivePointer
    */
