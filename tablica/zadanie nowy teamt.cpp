#include <iostream>
using namespace std;
int main() {
	char tekst [20];
	cout << "Podaj tekst ( max 49 znakow): ";
	cin.getline(tekst, 50);
	cout << "Wprowadzono tekst:" << tekst << endl;
	
}