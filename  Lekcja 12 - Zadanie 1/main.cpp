#include <iostream>
#include <string>


int main()
{
    const std::string a = "Tekst";
    std::string& a1 = a;// nie mozna przypisac zmiennej referencji do sta³ej
    const std::string& a2 = a;



    std::string b = "Jogurt";
    std::string& b1 = b;
    const std::string& b2 = b;





}
