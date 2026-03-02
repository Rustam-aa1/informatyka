#include <iostream>
using namespace std;
	
	int main() {
		int liczba;
		cout << "Podaj liczbe: (0-100)";
		cin >> liczba;
		if (cin.fail()) {
			cout << "blad:" << endl;
			return 1; 
		}
		
		if ( liczba < 0 || liczba > 100) {
		cout << "Blad: liczba punktuw musi byc w zakresie 0-100." <<endl;
	} 
		else if ((liczba >= 10) && (liczba <= 20)) {
			 cout << "Liczba jest poza zakresem 10-20." << endl;}
	return 0;	
	}


    

    
		




    

