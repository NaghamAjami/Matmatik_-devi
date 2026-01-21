#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    double a, b, c, delta, x1, x2;

    cout << "ax^2 + bx + c = 0 denklemi icin katsayilari giriniz:" << endl;
    cout << "a: "; cin >> a;
    cout << "b: "; cin >> b;
    cout << "c: "; cin >> c;

    delta = pow(b, 2) - (4 * a * c);
	 cout << "\nDiskriminant (Delta): " << delta << endl;

    if (delta < 0) {
        cout << "Delta < 0 oldugu icin gercek kok yoktur." << endl;
    } 
    else if (delta == 0) {
       x1 = -b / (2 * a);
        cout << "Delta = 0 oldugu icin tek bir gercek (cakisik) kok vardir." << endl;
      cout << "Kok: x = " << x1 << endl;
    } 
    else { 
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        cout << "Delta > 0 oldugu icin iki farkli gercek kok vardir." << endl;
        cout << "1. Kok (x1): " << x1 << endl;
        cout << "2. Kok (x2): " << x2 << endl;
    }

    return 0;
}
