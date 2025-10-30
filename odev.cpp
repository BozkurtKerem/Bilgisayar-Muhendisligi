#include <iostream>
using namespace std;

int main() {
    double sayi1, sayi2, sonuc;
    char islem;

    cout << "Birinci sayiyi gir: ";
    cin >> sayi1;

    cout << "Yapilacak islemi gir (+, -): ";
    cin >> islem;

    cout << "Ikinci sayiyi gir: ";
    cin >> sayi2;

    if (islem == '+') {
        sonuc = sayi1 + sayi2;
    } 
    else if (islem == '-') {
        sonuc = sayi1 - sayi2;
    }

    cout << "Sonuc: " << sonuc << endl;
    return 0;
}

