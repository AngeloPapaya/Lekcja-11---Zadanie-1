#include <iostream>
class Person
{

    std::string surname;
    int age = 0;
     public:
    Person() = default;
    Person(std::string _surname, int _age)
    {
        age = _age;
        surname = _surname;
    }
    Person(const Person& copy)
        : surname(copy.surname), age(copy.age)
    {}
    ~Person() {}
};
int main()
{
    Person employee;
    Person employee1("Kowalski", 27); // wywolanie konstruktora sparametryzowanego
    Person employee2 = employee; // niejawne wywolanie konstruktora kopiujacego
    Person employee3 = Person(employee); // jawne wywolanie konstruktora kopiujacego
}
