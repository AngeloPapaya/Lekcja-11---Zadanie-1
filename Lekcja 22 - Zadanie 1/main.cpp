#include <iostream>
#include <string>

class Animal
{
    std::string name;
    int legs;
    std::string voice;
    bool tail;

public:

    void setLegs(int numLegs)
    {
     legs = numLegs;
    }

    void setVoice(const std::string& _voice)
    {
     voice = _voice;
    }

    void hasTail (bool _tail)
    {
     tail = _tail;
    }

    void setName (const std::string& _name)
    {
     name = _name;
    }

    void ShowData()
    {
        std::cout <<name << " ma " << legs << " nogi, " << "wydaje " << voice << " i " << (tail ? "ma ogon": "nie ma ogona") << "\n";
    }

};



class Waz : public Animal
{
public:
    Waz()
    {
        setName("Waz");
        setLegs(1);
        setVoice("tsss");
        hasTail(false);
    }
};

class Goryl : public Animal
{
public:
    Goryl()
    {
        setName("Goryl");
        setLegs(2);
        setVoice("raaar");
        hasTail(true);
    }
};

class Kot : public Animal
{
public:
    Kot()
    {
        setName("Kot");
        setLegs(4);
        setVoice("meow");
        hasTail(true);
    }
};
int main()

{

Waz waz;
waz.ShowData();

Goryl goryl;
goryl.ShowData();

Kot kot;
kot.ShowData();

}
