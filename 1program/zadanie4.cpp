#include <iostream>
 using namespace std;
int main(){
cout << "Podaj liczbe wierszy: ";
cin >> wysokosc;
cout << "Podaj liczbe kolumn: ";
cin >> szyrokosc;
for (int i = 0; i < wysokosc; i++) {

    for (int j = 0; j < szerokosc; j++) {
        cout << "* ";
    }
    cout << endl;
}