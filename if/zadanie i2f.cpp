#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Podaj liczbe calkowita N: ";
    cin >> N;
    if (N < 1) {
        cout << "N musi byc liczba wieksza lub rowna 1." << endl;
        return 0;
    }
    for (int i = 1; i <= N; i++) {
        cout << "Kwadrat liczby " << i << " wynosi: " << i * i << endl;
    }

    return 0;
}
