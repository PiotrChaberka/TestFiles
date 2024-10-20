#include <iostream>
#include <algorithm>

using namespace std;

int main() {


    int a; // Stworzenie zmiennej a
    cin >> a; // Wprowadzenie liczby do zmiennej a
    cout << a; // Wypisanie liczby a



    for(int i = 0; i < a; i++)  // Pętla for. (określenie zmiennej iteratora; Warunek który ma spełniać; inkrementacja [i++] / dekrementacja [i--])
    {
        if(i == 5 || i%2 != 0) // Jeżeli iteracja == 5 lub [||] reszta z dzielenia i na 2 nie wynosi 0
        {
            continue;  // Przejdź to następnej iteracji, czyli pomiń jedno wypisanie które jest poza warunkiem
        }
        cout << i << endl;  // wypisz aktualną wartość i, czyli w przypadku a == 7 będzie to 0 2 4 6.

    }



    while(a < 20) // tak długo jak a < 20
    {
        cout << "Mniejsze niz 20 " << a << "\n" ; // wypisz Mniejsze niz 20 [wartość a] [następna linijka]
        a++; // inkrementacja żeby pętla się kiedyś skończyła


    }


    /*
    Komentarz wielolinijkowy
    */

    // komentarz jedno linijkowy

}
