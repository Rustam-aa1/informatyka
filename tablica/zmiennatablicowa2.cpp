#include <iostream>
using namespace std;

int main() {
    const int ROZMIAR = 3;
    int macierz[ROZMIAR][ROZMIAR];
    int suma = 0;
    cout << "Podaj 9 liczb calkowitych do macierzy 3x3:" << endl;

    for(int i = 0; i < ROZMIAR; i++) {
        for(int j = 0; j < ROZMIAR; j++) {
            cout << "Podaj liczbe dla wiersza " << i + 1 
                 << ", kolumny " << j + 1 << ": ";
            cin >> macierz[i][j];
            suma += macierz[i][j];
        }
    }
    double srednia = (double)suma / 9;
    cout << "Srednia liczb: " << srednia << endl;
    return 0;
}