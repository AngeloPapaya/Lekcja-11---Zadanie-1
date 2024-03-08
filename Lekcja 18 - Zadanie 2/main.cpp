#include <iostream>
#include <string>


struct Student
{
    std::string firstname;
    std::string lastname;

};

struct Marks
{
    Student student;
    double polish,english,maths,wf;

    void Arithmetic()
    {
        std::cout << "Srednia ocen ucznia " << student.firstname << " " << student.lastname << " to: " << (polish+english+maths+wf)/4 << "\n";

    }

    void Distinction()

    {
        std::cout << "Swiadectwo z wyroznieniem: ";
        if (((polish+english+maths+wf)/4) >=4.75) std::cout << "tak"; else std::cout << "nie";

    }

    void Info()

    {
    std::cout << "Podaj imie ucznia: ";
    std::cin >> student.firstname;
    std::cout << "Podaj nazwisko ucznia: ";
    std::cin >> student.lastname;
    std::cout << "Jezyk polski: ";
    std::cin >> polish;
    std::cout << "Jezyk angielski: ";
    std::cin >> english;
    std::cout << "Matematyka: ";
    std::cin >> maths;
    std::cout << "W-F: ";
    std::cin >> wf;
    }

} marks;

int main()
{

    marks.Info();
    marks.Arithmetic();
    marks.Distinction();

}
