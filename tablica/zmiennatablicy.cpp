#include <iostream>
using namespace std;

int main() {
    const int ROZMIAR = 10;
    int liczby[ROZMIAR];
    cout << "Podaj 10 liczb calkowitych:" << endl;

    for(int i = 0; i < ROZMIAR; i++) {
        cout << "Podaj liczbe nr " << i + 1 << ": ";
        cin >> liczby[i];
    }
    int najmniejsza = liczby[0];
    for(int i = 1; i < ROZMIAR; i++) {
        if(liczby[i] < najmniejsza) {
            najmniejsza = liczby[i];
        }
    }
    cout << "Najmniejsza liczba to: " << najmniejsza << endl;
    return 0;
}