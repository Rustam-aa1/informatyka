#include <iostream>

using namespace std;

int main() {
    int tablica[5]; 
    int suma=0;
    cout << "Podaj 5 liczb calkowitych:" << endl;
    for(int i = 0; i < 5; i++) {
        cin >> tablica[i];
}
    for(int i = 0; i < 5; i++) {
       if(tablica[i] < 0) {
           tablica[i] = 0;
        }
    }
 cout << ("Zmodyfikowana tablica:") << endl;
 for(int i = 0; i < 5; i++) {
 	 	cout << tablica[i] << ",";
 }
 return 0;
}
 
 


 