#include <iostream>
using namespace std;

int main() {
    double sayi1, sayi2, sonuc;
    char islem;

    cout << "Birinci sayiyi gir: ";
    cin >> sayi1;

    cout << "Yapilacak islemi gir (+, -, *, /): ";
    cin >> islem;

    cout << "Ikinci sayiyi gir: ";
    cin >> sayi2;

    if (islem == '+') {
        sonuc = sayi1 + sayi2;
    } 
    else if (islem == '-') {
        sonuc = sayi1 - sayi2;
    } 
    else if (islem == '*') {
        sonuc = sayi1 * sayi2;
    } 
    else if (islem == '/') {
        if (sayi2 == 0)
            cout << "Hata: 0'a bolunemez!" << endl;
        else
            sonuc = sayi1 / sayi2;
    } 
    else {
        cout << "Gecersiz islem!" << endl;
        return 0;
    }

    cout << "Sonuc: " << sonuc << endl;
    return 0;
}
