#include <iostream>
#include <vector>
#include <ctime>
#include <list>
#include <set>
#include <algorithm>
int main()
{
    std::vector <int> vector1;
    std::list <int> list1;
    std::set <int> set1;


    for (auto i = 0; i < 100000; i ++)
    {
        vector1.push_back(i+1);
    }

    std::clock_t vector1000StartClock, vector1000EndClock;
    vector1000StartClock = std::clock();

     for (auto i = 0; i < 100000; i ++)
    {
        std::find(vector1.begin(), vector1.end(), 1000);
    }

    vector1000EndClock = std::clock();

    std::clock_t vector50000StartClock, vector50000EndClock;
    vector50000StartClock = std::clock();

     for (auto i = 0; i < 100000; i ++)
    {
        std::find(vector1.begin(), vector1.end(), 50000);
    }

    vector50000EndClock = std::clock();

    std::clock_t vector90000StartClock, vector90000EndClock;
    vector90000StartClock = std::clock();

     for (auto i = 0; i < 100000; i ++)
    {
        std::find(vector1.begin(), vector1.end(), 90000);
    }

    vector90000EndClock = std::clock();


    for (auto i = 0; i < 100000; i ++)
    {
        list1.push_back(i+1);
    }


    std::clock_t list1000StartClock, list1000EndClock;
    list1000StartClock = std::clock();
     for (auto i = 0; i < 100000; i ++)
    {
        std::find(list1.begin(),list1.end(), 1000);
    }

    list1000EndClock = std::clock();
    std::clock_t list50000StartClock, list50000EndClock;
    list50000StartClock = std::clock();
     for (auto i = 0; i < 100000; i ++)
    {
        std::find(list1.begin(),list1.end(), 50000);
    }

    list50000EndClock = std::clock();

    std::clock_t list90000StartClock, list90000EndClock;
    list90000StartClock = std::clock();
     for (auto i = 0; i < 100000; i ++)
    {
        std::find(list1.begin(),list1.end(), 90000);
    }

    list90000EndClock = std::clock();


    for (auto i = 0; i < 100000; i ++)
    {
        set1.insert(i+1);
    }


    std::clock_t set1000StartClock, set1000EndClock;
    set1000StartClock = std::clock();

    for (auto i = 0; i < 100000; i ++)
    {
        set1.find(1000);
    }
    set1000EndClock = std::clock();

    std::clock_t set50000StartClock, set50000EndClock;
    set50000StartClock = std::clock();

    for (auto i = 0; i < 100000; i ++)
    {
        set1.find(50000);
    }
    set50000EndClock = std::clock();


    std::clock_t set90000StartClock, set90000EndClock;
    set90000StartClock = std::clock();

    for (auto i = 0; i < 100000; i ++)
    {
        set1.find(90000);
    }
    set90000EndClock = std::clock();

    std::cout << "Operacja\t\tstd::vector\t\tstd::list\t\tstd::set" << std::endl;
    std::cout << "--------------------------------------------------------------------------" << std::endl;
    std::cout << "Find(1000) x 100 000\t\t" << 1000 * (vector1000EndClock - vector1000StartClock) / CLOCKS_PER_SEC << "ms\t\t" << 1000 * (list1000EndClock - list1000StartClock) / CLOCKS_PER_SEC << "ms\t\t" <<1000 * (set1000EndClock - set1000StartClock) / CLOCKS_PER_SEC << "ms " << "\n";
    std::cout << "Find(50000) x 100 000\t\t" << 1000 * (vector50000EndClock - vector50000StartClock) / CLOCKS_PER_SEC << "ms\t\t" << 1000 * (list50000EndClock - list50000StartClock) / CLOCKS_PER_SEC << "ms\t\t" <<1000 * (set50000EndClock - set50000StartClock) / CLOCKS_PER_SEC << "ms "<<"\n";
    std::cout << "Find(90000) x 100 000\t\t" << 1000 * (vector90000EndClock - vector90000StartClock) / CLOCKS_PER_SEC << "ms\t\t" << 1000 * (list90000EndClock - list90000StartClock) / CLOCKS_PER_SEC << "ms\t\t" <<1000 * (set90000EndClock - set90000StartClock) / CLOCKS_PER_SEC << "ms ";


}

