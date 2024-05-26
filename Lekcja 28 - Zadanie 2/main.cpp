#include <iostream>
#include <algorithm>
#include <string>
#include <fstream>

int main()
{

const int rows = 5;
const int columns = 3;

int operation;
std::string table[rows][columns] = {};

std::fstream file;
std::string line;

file.open("SecretDataBase.txt");


 for (int i = 0; i < rows; ++i)
    {
        if (std::getline(file, line))
        {
            size_t pos = 0;
            for (int j = 0; j < columns - 1; ++j)
            {
                size_t next_comma = line.find(',', pos);
                    if (next_comma != std::string::npos)
                    {
                        table[i][j] = line.substr(pos, next_comma - pos);
                        pos = next_comma + 1;
                    }
                    else
                    {
                        std::cerr << "Nieprawid³owy format pliku." << std::endl;
                        return 1;
                    }
            }
            table[i][columns - 1] = line.substr(pos);
        } else {
            std::cerr << "Nie uda³o siê wczytaæ linii." << std::endl;
            return 1;
        }
    }
std::cout << "Menu: ";
std::cout << std::endl;
std::cout << "1. Wyswietl osoby z bazy";
std::cout << std::endl;
std::cout << "2. Posortuj alfabetycznie wedlug imienia";
std::cout << std::endl;
std::cout << "3. Posortuj alfabetycznie wedlug nazwiska";
std::cout << std::endl;
std::cout << "4. Zakoncz program";
std::cout << std::endl;

do
{

std::cout << "Podaj numer polecenia: ";
std::cin >> operation;
std::cout << std::endl;


switch (operation)
    {


    case 1:

        std::cout << "Osoby w bazie: ";
        std::cout << std::endl;
        for (int i = 0; i < rows; i ++)
        {
            for (int j = 0; j < columns; j ++)
            {
                std::cout << table[i][j] <<" ";
            }
            std::cout << "\n";

        }
        break;

    case 2:

        for(int i = 0 ;i < rows; i++)
        {
            for(int j = 1; j < rows-i; j++)
            {
                    if (table [j-1][0] > table[j][0])
                    {
                    swap(table[j-1][0], table[j][0]);
                    swap(table[j-1][1], table[j][1]);
                    swap(table[j-1][2], table[j][2]);
                    }
            }
        }
        std::cout << "Posortowano dane alfabetycznie wedlug imion!";
        std::cout << std::endl;
        break;

    case 3:

        for(int i = 0 ;i < rows; i++)
        {
            for(int j = 1; j < rows-i; j++)
            {
                    if (table [j-1][1] > table[j][1])
                    {
                    swap(table[j-1][1], table[j][1]);
                    swap(table[j-1][0], table[j][0]);
                    swap(table[j-1][2], table[j][2]);
                    }
          }
        }
        std::cout << "Posortowano dane alfabetycznie wedlug nazwiska!";
        std::cout << std::endl;
        break;

    case 4:

        std::cout << "Koniec programu!";
        break;

    }

} while (operation == 1 || operation == 2 || operation == 3);

return 0;
}
