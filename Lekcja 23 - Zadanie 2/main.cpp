#include <iostream>

struct Animal
{
    virtual void MakeSound() const = 0;
    virtual bool IsAlive() const = 0;
    virtual ~Animal(){}
};
struct Cactus : Animal

{

    bool isWatered() const
    {
        return true;
    }
    bool IsAlive() const override
    {
        if (isWatered())
        {
            return true;
        }
        else
        {
            return false;
        };
    }

    void MakeSound() const override
    {

    }
};
struct Duck : Animal

{
    bool IsAlive() const override
    {
        return true;
    }
    void MakeSound() const override
    {
        std::cout << "Quack!" << "\n";
    }

};
struct Lion : Animal

{
    bool IsAlive() const override
    {
        return true;
    }
    void MakeSound() const override
    {
     std::cout << "Roar!!" << "\n";
    }

};


int main()
{
    Cactus cactus;
    if (cactus.IsAlive()) std::cout << "I'm alive" << "\n";
    Lion lion;
    if (lion.IsAlive()) std::cout << "I'm alive" << "\n";
    lion.MakeSound();
    Duck duck;
    duck.MakeSound();


}
