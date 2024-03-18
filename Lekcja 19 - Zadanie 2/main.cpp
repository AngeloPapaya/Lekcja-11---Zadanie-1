#include <iostream>
#include <string>

class Animal

{

private:
        std::string nameofanimal;
        int leg;
        std::string voice;
        bool tail;
        static int counter;

 public:
        void setName(const std::string &name)
        {
            nameofanimal = name;
            counter++;
        }

        void setLegs(int Leg)
        {
            leg = Leg;
        }

        void setVoice(const std::string &Voice)
        {
            voice = Voice;
        }

        void setTail (const bool &Tail)
        {
            tail = Tail;
        }

        std::string getName() const
        {
            return nameofanimal;

        }

        int getLeg() const
        {
            return leg;
        }

         std::string getVoice() const
        {
            return voice;
        }

         bool hasTail() const
        {
            return tail;
        }

        void ShowData()
        {
            std::cout << "Name: " << getName() << "\n" << "Legs: " << getLeg() << "\n" << "Voice: " << getVoice() << "\n" << "Tail: " <<  (hasTail() ? "Yes" : "No") << "\n" << "\n";
        }

        static void Counter()
        {
            std::cout << "How many animals ?\n" << counter;
        }


};
int Animal::counter=0;
int main()
{
   Animal cat;
   cat.setName("Mruczek");
   cat.setLegs(5);
   cat.setVoice("Meow");
   cat.setTail(true);
   cat.ShowData();

   Animal gorilla;
   gorilla.setName("Big");
   gorilla.setLegs(4);
   gorilla.setVoice("grrrr");
   gorilla.setTail(false);
   gorilla.ShowData();

   Animal shark;
   shark.setName("Jaws");
   shark.setLegs(0);
   shark.setVoice("aaa");
   shark.setTail(true);
   shark.ShowData();
   Animal::Counter();
}
