#include <iostream>
#include <memory>

struct randomStruct
{
    int val;
    randomStruct(int _val) : val(_val) {}
};


int main()
{
    std::shared_ptr<randomStruct> unPtr1 = std::make_shared<randomStruct>(2);
    std::shared_ptr<randomStruct> unPtr2 = std::make_shared<randomStruct>(3);
    std::cout << "shared_ptr created." <<"\n";
    std::cout << "swap done." << "\n";
    unPtr1.swap(unPtr2);
    std::cout <<"reset done." <<"\n";
    unPtr1.reset();
    std::cout << unPtr1->val;

}
