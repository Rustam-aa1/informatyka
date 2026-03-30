#include <iostream>
using namespace std;

int main() {
    int N;

    // Poproszenie użytkownika o podanie liczby dodatniej
    cout << "Podaj dodatnia liczbe calkowita N: ";
    cin >> N;

    int i = 2; // pierwsza liczba parzysta

    // Pętla while wyświetlająca liczby parzyste od 2 do N
    while (i <= N) {
        cout << i << endl;
        i += 2; // przejście do kolejnej liczby parzystej
    }

    cout << "Koniec programu." << endl;

    return 0;
}
