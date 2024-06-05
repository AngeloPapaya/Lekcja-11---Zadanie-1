#include <iostream>
#include <algorithm>
#include <string>

int main()
{
    std::string randomtext;
    std::cout << "Podaj fraze: ";
    std::getline(std::cin,randomtext);
    auto randomtext_copy(randomtext); //zrobienie kopii pierwszej zmiennej do porownania
    randomtext.erase(remove(randomtext.begin(),randomtext.end(),' '),randomtext.end()); //usuwanie spacji z pierwszej zmiennej
    randomtext_copy.erase(remove(randomtext_copy.begin(),randomtext_copy.end(),' '),randomtext_copy.end()); //usuwanie spacji z drugiej zmiennej

    std::reverse(randomtext_copy.begin(), randomtext_copy.end()); //reverse drugiej zmiennej

    if (auto reversed_text = randomtext_copy; randomtext == reversed_text)
    {
        std::cout << "Podana fraza to palindrom";
    }

    else
    {
        std::cout << "To nie jest palindrom";
    }



}
