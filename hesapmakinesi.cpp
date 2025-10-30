#include <iostream>
using namespace std;

int main() {
    double sayi1, sayi2;

    // Kullanıcıdan iki sayı al
    cout << "Birinci sayiyi girin: ";
    cin >> sayi1;

    cout << "Ikinci sayiyi girin: ";
    cin >> sayi2;

    // Çarpma işlemi
    double carpim = sayi1 * sayi2;
    cout << "Carpim: " << carpim << endl;

    // Bölme işlemi (sıfıra bölme kontrolü)
    if (sayi2 != 0) {
        double bolum = sayi1 / sayi2;
        cout << "Bolum: " << bolum << endl;
    } else {
        cout << "Sifira bolme hatasi!" << endl;
    }

    return 0;
}