

#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Podanie liczby calkowitej dodatniej N: ";
    cin >> N;

    int suma = 0;
    for (int i = 1; i <= N; i++) {
	 suma +=i;
    }

    cout << "Suma ="<<suma <<endl;
    return 0;
}




