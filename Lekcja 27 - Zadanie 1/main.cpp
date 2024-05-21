#include <iostream>
#include <string>

class PiskException: public std::exception
{
public:
    const char* what() const noexcept override
    {
        return "Ochrona uszu. Przerywam program.";
    }
};


class Animal
{
    std::string name;
    int legs{};
    std::string voice;
    bool tail{};
protected:
    void setLegs(const int &numLegs)
    {
     legs = numLegs;
    }

    void setVoice(const std::string& _voice)
    {
     voice = _voice;
    }

    void hasTail (const bool &_tail)
    {
     tail = _tail;
    }

    void setName (const std::string& _name)
    {
     name = _name;
    }
public:

    void ShowData()
    {
        if (voice == "pisk")
            throw PiskException();
        else
            std::cout <<name << " ma " << legs << " nogi, " << "wydaje " << voice << " i " << (tail ? "ma ogon": "nie ma ogona") << "\n";

    }

};


class Waz : protected Animal
{
public:
    Waz()
    {
        setName("Waz");
        setLegs(1);
        setVoice("tsss");
        hasTail(false);
    }

    void ShowWaz()
    {
     ShowData()   ;
    }
};

class Goryl : protected Animal
{
public:
    Goryl()
    {
        setName("Goryl");
        setLegs(2);
        setVoice("raaar");
        hasTail(true);
    }

    void ShowGoryl()
    {
        ShowData()   ;
    }
};

class Kot : protected Animal
{
public:
    Kot()
    {
        setName("Kot");
        setLegs(4);
        setVoice("meow");
        hasTail(true);
    }

    void ShowKot()
    {
     ShowData()   ;
    }
};

class Mysz : protected Animal
{
public:
    Mysz()
    {
        setName("Mysz");
        setLegs(4);
        setVoice("pisk");
        hasTail(true);
    }

    void ShowMysz()
    {
     ShowData()   ;
    }
};


int main()

{
    try
    {

        Waz waz;
        waz.ShowWaz();

        Goryl goryl;
        goryl.ShowGoryl();

        Kot kot;
        kot.ShowKot();

        Mysz mysz;
        mysz.ShowMysz();
  }

    catch (const PiskException& ex)
    {
            std::cerr << ex.what();
    }

    catch (const std::exception& ex)
    {
            std::cerr << ex.what();
    }

}
