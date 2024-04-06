#include <iostream>


template <class A, class B, class C>
class Return

{

};

template <>
class Return <int,int,int>

{
public:
    int Operation(int a, int b, int c)
    {
        std::cout << a << " + " << b << " + " << c <<" = " << a+b+c << "\n";
        return a + b + c;
    }

};
template <>
class Return <std::string, std::string, std::string>

{
public:

    std::string Operation(std::string a, std::string b, std::string c)
    {
        std::cout << a << " + " << b << " + " << c <<" = " << a+b+c << "\n";
        return a + b + c;
    }

};

template <>
class Return <double, double, double>

{
public:

    double Operation(double a, double b, double c)
    {
        std::cout << a << " + " << b << " + " << c <<" = " << a+b+c << "\n";
        return a + b + c;
    }

};

int main()
{
    Return <int, int, int> int1;
    int1.Operation(2,5,2);

    Return <std::string,std::string,std::string> string1;
    string1.Operation("Very","Simple","Task");

    Return <double,double,double> double1;
    double1.Operation(20,1.1,2.1);
}
