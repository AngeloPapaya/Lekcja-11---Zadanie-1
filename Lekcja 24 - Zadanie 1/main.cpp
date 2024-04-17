#include <iostream>
#include <vector>
#include <ctime>
#include <list>
#include <set>
int main()
{
    std::vector <int> vector1;
    std::list <int> list1;
    std::set <int> set1;

    std::clock_t vectorStartClock, vectorEndClock;
    vectorStartClock = std::clock();
    for (auto i = 0; i < 100000; i ++)
    {
        vector1.push_back(i+1);
    }
    vectorEndClock = std::clock();

    std::clock_t listStartClock, listEndClock;
    listStartClock = std::clock();
    for (auto i = 0; i < 100000; i ++)
    {
        list1.push_back(i+1);
    }
    listEndClock = std::clock();

    std::clock_t setStartClock, setEndClock;
    setStartClock = std::clock();
    for (auto i = 0; i < 100000; i ++)
    {
        set1.insert(i+1);
    }
    setEndClock = std::clock();

    std::cout << "Operacja\t\tCzas trwania (ms)" << std::endl;
    std::cout << "-------------------------------------" << std::endl;
    std::cout << "Dodanie do vectora\t\t" << 1000 * (vectorEndClock - vectorStartClock) / CLOCKS_PER_SEC << "ms" << "\n";
    std::cout << "Dodanie do listy\t\t" << 1000 * (listEndClock - listStartClock) / CLOCKS_PER_SEC << "ms" << "\n";
    std::cout << "Doddanie do setu\t\t" << 1000 * (setEndClock - setStartClock) / CLOCKS_PER_SEC << "ms";
}



