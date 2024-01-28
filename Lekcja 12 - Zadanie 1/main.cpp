#include <iostream>
#include <string>


int main()



{
    std::string a = "Tekst";
    const std::string b = "Tekst2";
    std::string &a1 = a;
    const std::string &b1 = b;
    
    a = b;
    a = a1;
    a = b1;
    
    b = a; //b jest niezmienne i nie mozna przypisac do b innej zmiennej
    b = a1;
    b = b1;
    
    a1 = a;
    a1 = b;
    a1 = b1;
    
    
    b1 = a;
    b1 = a1;
    b1 = b;







}
/*
w Zadaniu 1 powinieneś zainicjalizować na początku 4 zmienne
A. string
B. const string
C. &refString =A
D. const &refString = B
 
I spróbować dokonać przypisania każdej z każdączyli
 
A = B
A= C
A=D
 
B=A
B=C
B=D
....
    */
