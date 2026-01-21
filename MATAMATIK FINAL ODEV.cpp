#include <iostream>
#include <cmath> 
#include <locale.h>

using namespace std;

int main() {
  
    double a, b, c, delta, x1, x2;

   
    setlocale(LC_ALL, "Turkish");


    cout << "Lütfen a katsayisini giriniz: ";
    cin >> a;
    cout << "Lütfen b katsayisini giriniz: ";
    cin >> b;
    cout << "Lütfen c katsayisini giriniz: ";
    cin >> c;

 
    delta = (b * b) - (4 * a * c);
    cout << "Diskriminant (Delta): " << delta << endl;


    if (delta < 0) {
        cout << "Sonuç: Gerçek kök yoktur." << endl;
    } 
    else if (delta == 0) {
        x1 = -b / (2 * a);
        cout << "Sonuç: Tek bir gerçek kök vardir." << endl;
        cout << "x = " << x1 << endl;
    } 
    else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        cout << "Sonuç: Iki farkli kök vardir." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }

    return 0;
}
