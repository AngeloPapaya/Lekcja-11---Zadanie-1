#include <iostream>
#include <map>

int main()
{
    std::map<int, std::string> map1 =
    {
        {1, "Styczen"}, {2, "Luty"}, {3, "Marzec"},
        {4, "Kwiecien"}, {5, "Maj"}, {6, "Czerwiec"},
        {7, "Lipiec"}, {8, "Sierpien"}, {9, "Wrzesien"},
        {10, "Pazdziernik"}, {11, "Listopad"}, {12, "Grudzien"}
    };

    for (auto i = map1.rbegin(); i != map1.rend(); i++)
        std::cout << i->first << ". " << i->second << "\n";

    return 0;
}
