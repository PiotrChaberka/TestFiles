#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class Book{

public:
    string Title;
    string Author;
    int Year;
    Book(string Title, string Author, int Year) : Title(Title), Author(Author), Year(Year)
    {}

    void DisplayInfo(){
        cout << "Tytul: " << Title << "\n";
        cout << "Autor: " << Author << "\n";
        cout << "Rok: " << Year << "\n";
    }

};

int main()
{
    Book* Ks1 = new Book("a", "b", 2002);
    Book* Ks2 = new Book("c", "d", 2069);

    Ks1->DisplayInfo();
    Ks2->DisplayInfo();

}



