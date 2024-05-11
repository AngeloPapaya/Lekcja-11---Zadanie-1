#include <iostream>
#include <functional>


void ApplyFunction(std::function<int(int)>f)
    {
        for (int i = 0; i <=5; i++)
        {
            int result = f(i);
            if (result != -1)
                std::cout << f(i) << " ";
        }

    }


int main()

{
    ApplyFunction([](int x) {return x * x;});
    std::cout << "\n";
    ApplyFunction([](int x) {
        if ((x*x)%2 == 0)
            {
                return x;
            }
        else
            {
                return -1;
            }
        });
}
