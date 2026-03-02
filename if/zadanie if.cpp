#include <iostream>
using namespace std;

int main() {
    double masa;     // masa ciala w kg
    double wzrost;   // wzrost w metrach
    double bmi;

    cout << "Podaj mase ciala (kg): ";
    cin >> masa;

    cout << "Podaj wzrost (m): ";
    cin >> wzrost;

    bmi = masa / (wzrost * wzrost);

    cout << "Twoje BMI: " << bmi << endl;

    if (bmi < 18.5) {
        cout << "Kategoria: Niedowaga" << endl;
    }
    else if (bmi >= 18.5 && bmi <= 24.9) {
        cout << "Kategoria: W normie" << endl;
    }
    else if (bmi >= 25 && bmi <= 29.9) {
        cout << "Kategoria: Nadwaga" << endl;
    }
    else {
        cout << "Kategoria: Otylosc" << endl;
    }

    return 0;
}
