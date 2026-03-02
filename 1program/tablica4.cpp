#include <iostream>
using namespace std;
int main() {
    const int WIERSZE = 2;
    const int KOLUMNY = 3;
    int macierz[WIERSZE][KOLUMNY];
    int transponowana[KOLUMNY][WIERSZE];
    cout << "Podaj 6 liczb calkowitych do macierzy 2x3:" << endl;
 
    for(int i = 0; i < WIERSZE; i++) {
        for(int j = 0; j < KOLUMNY; j++) {
            cout << "Podaj liczbe dla wiersza " << i + 1 
                 << ", kolumny " << j + 1 << ": ";
            cin >> macierz[i][j];
        }
    }

    for(int i = 0; i < WIERSZE; i++) {
        for(int j = 0; j < KOLUMNY; j++) {
            transponowana[j][i] = macierz[i][j];
        }
    }
 
    cout << "\nTransponowana macierz:\n";
    for(int i = 0; i < KOLUMNY; i++) {
        for(int j = 0; j < WIERSZE; j++) {
            cout << transponowana[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}