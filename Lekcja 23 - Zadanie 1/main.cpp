#include <iostream>
#include <string>
#include <vector>

struct Object

{
    virtual bool isFlammable() = 0;
    virtual ~Object() {}
};

struct Matchstick : Object

{
    bool isFlammable() override
    {
        return true;
    }
};

struct Wood : Object

{
    bool isFlammable() override
    {
        return true;
    }
};

struct Brick : Object

{
    bool isFlammable() override
    {
        return false;
    }
};

struct Baloon  final : Object

{
    bool isFlammable() override
    {
        return false;
    }
};

struct Fork  : Object

{
    bool isFlammable() override
    {
        return false;
    }
};

struct Gas  final : Object

{
    bool isFlammable() override
    {
        return true;
    }
};

int main()
{
    std::vector<Object*> objects = {new Matchstick(), new Fork(), new Baloon(), new Brick(), new Wood(), new Gas()};

    for (auto i = 0; i < objects.size(); i++)
    {
        if (objects[i]->isFlammable())
        {
           std::cout << "Be Careful!" << "\n";
        }

    }
    for (auto i = 0; i < objects.size(); i++)
    {
        delete objects[i];
    }

}
