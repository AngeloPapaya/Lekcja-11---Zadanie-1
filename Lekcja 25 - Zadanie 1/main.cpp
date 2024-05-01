#include <iostream>
#include <memory>

struct randomStruct
{
    int val;
    randomStruct(int _val) : val(_val)
    {

    }
};


int main()
{
    std::unique_ptr<randomStruct> unPtr1 = std::make_unique<randomStruct>(2);
    std::unique_ptr<randomStruct> unPtr2 = std::make_unique<randomStruct>(3);
    std::cout << "unique_ptr created." <<"\n";
    std::cout << "swap done." << "\n";
    unPtr1.swap(unPtr2);
    std::cout << "release done" << "\n";
    randomStruct* ptr = unPtr1.release();
    delete ptr;

}
