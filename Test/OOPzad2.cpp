#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class Drink{
public:
    string size;
    Drink(string size) : size(size) // Najprostrzy konstruktor bez udziwnień
    {}

    void DisplayInfo()
    {
     cout << "Rozmiar napoju: " << size << "\n";
    }

};
class Coffe : public Drink{
public:
    string type;
    Coffe(string size, string type) : Drink(size), type(type) // pamiętać żeby dać Drink(size) a nie size(size)
    {}

    void DisplayInfo()
    {
     cout << "Rozmiar napoju: " << size << "\n";
     cout << "Typ napoju: " << type << "\n";
    }

};

int main()
{
    Coffe* Late1 = new Coffe("Mala", "Late");
    Late1->DisplayInfo();
    Drink* Woda = new Drink("Srednia");
    Woda->DisplayInfo();

}



