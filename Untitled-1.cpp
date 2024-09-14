#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double jari_jari, luas;
    const double PI = 3.14159265358979323846;

    cout << "Masukkan jari-jari lingkaran: ";
    cin >> jari_jari;

    if (jari_jari <= 0) {
        cout << "Jari-jari harus lebih besar dari 0." << endl;
        return 1;
    }

    luas = PI * pow(jari_jari, 2);

    cout << fixed << setprecision(2);
    cout << "Luas lingkaran dengan jari-jari " << jari_jari << " adalah: " << luas << endl;

    return 0;
}