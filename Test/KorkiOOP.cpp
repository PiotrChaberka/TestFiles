#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class Drink
{
public:
    string size;

    Drink(string size) : size(size){};

    void displayInfo()
    {
        cout << size << "\n";
    }
};

class Coffee : public Drink
{
public:
    string type;

    Coffee(string size, string type) : Drink(size), type(type){};

    void displayInfo()
    {
        cout << size << "\n";
        cout << type << "\n";
    }
};

int main()
{
Coffee* Late = new Coffee("maly", "Late");
Late->displayInfo();

Drink* Woda = new Drink("sredni");
Woda->displayInfo();
}




/*
Napisz program, który symuluje prosty system napojów. Powinny zostać zrealizowane następujące wymagania:

Stwórz klasę bazową Drink, która reprezentuje dowolny napój.
Klasa powinna mieć:
  Pole size (string) (rozmiar napoju: mały, średni, duży),
  Konstruktor ustawiający rozmiar napoju,
  Metodę displayInfo, która wypisuje rozmiar napoju.
Stwórz klasę pochodną Coffee, która dziedziczy z klasy Drink. Klasa ta powinna dodatkowo zawierać:
  Pole type (string) (np. espresso, latte, cappuccino),
  Konstruktor ustawiający typ kawy i wywołujący konstruktor klasy bazowej,
  Nadpisaną metodę displayInfo, która wypisuje rozmiar i typ kawy.
W funkcji main utwórz co najmniej jedną instancję klasy Coffee i wywołaj dla niej metodę displayInfo.
*/
