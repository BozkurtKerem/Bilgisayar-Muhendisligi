#include<iostream>
using namespace std;
int main()
{
/*Aritmetik İşlemler
İşlem Önceliği
1. Parantez içi işlemler
2. Çarpma*,bölme/ ve mod (7 mod4 =3 => 7%4)
3. Toplama+ ve çıkarma-
*/
int sonuc;
sonuc = 21-45+(5*7)+23;
/*   5*7=35 
21-45=-24
-24+35=11
11+23=34
*/
cout <<"Sonuc:"<<sonuc<<endl;
    return 0;
}