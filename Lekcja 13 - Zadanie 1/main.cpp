#include <iostream>

std::string* CreateNewString()
{
    std::string InputFromUser;
    std::cin >> InputFromUser;

    std::string* test = new std::string;
    *test = InputFromUser;
    return test;
    delete test;
}


int main()
{
   std::string *test1 = CreateNewString();
   std::string *test2 = CreateNewString();
   std::string *test3 = CreateNewString();

   std::cout << *test1 << " " << *test2 << " " << *test3;
}
