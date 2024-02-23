#include <iostream>
#include <vector>

int main()
{
    std::vector <int> vec = {2,4,6,8,10};
    vec.push_back(12);
    vec.insert(vec.begin() + 3,7);
    vec.erase(vec.begin());
    vec.shrink_to_fit();

    std::cout << "size: " <<  vec.size() << "\n";
    std::cout << "max size: " << vec.max_size() << "\n";

    std::cout << "values: ";
    for (auto i = vec.begin(); i < vec.end(); i++)
        std::cout << *i << " ";

}
