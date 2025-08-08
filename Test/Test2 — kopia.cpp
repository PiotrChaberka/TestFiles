#include <iostream>

using namespace std;

int suma_iteracyjna(int n) {
    int suma = 0;  // Zmienna przechowująca bieżącą sumę
    for (int i = 1; i <= n; i++) {  // Pętla zaczynająca się od 1 i kończąca na n
        suma += i;  // Dodaj bieżącą liczbę do sumy
    }
    return suma;  // Zwróć wynik
}

int main() {
    int n;
    cout << "Podaj liczbę n: ";
    cin >> n;  // Pobierz wartość n od użytkownika
    cout << "Suma pierwszych " << n << " liczb wynosi: " << suma_iteracyjna(n) << endl;  // Wyświetl wynik
    return 0;
}
