#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class Ksiegarnia
{
private:
    string tytul;
    string autor;
    string ID;
public:
    int RokWydania;
    bool dostepna = false;

    Ksiegarnia(string tytul, string autor, string ID, int RokWydania) : tytul(tytul), autor(autor), ID(ID), RokWydania(RokWydania)
    {

    }


    void Jazda() const
    {
        cout << "Vroom vroom" << "\n";
        cout << "Jestem " << tytul << "\n";
    }

    void sprawdzDostepnosc() const
    {
        if (dostepna == true)
            cout << "Status: " << dostepna << "\n";
        else
            cout << "Status: " << dostepna << "\n";
    }
        void zmienDostepnosc()
    {
        if (dostepna)
        {
            cout << "Zmieniono dostepnosc!" << "\n";
            dostepna = false;
        }
        else
        {
            dostepna = true;
            cout << "Zmieniono dostepnosc!" << "\n";
        }
    }

};

int main()
{
    Ksiegarnia* Ksiazka1 = new Ksiegarnia("test", "Test1", "Test2", 1883);
    Ksiazka1->Jazda();
    Ksiazka1->sprawdzDostepnosc();
    Ksiazka1->zmienDostepnosc();
    Ksiazka1->sprawdzDostepnosc();
}



