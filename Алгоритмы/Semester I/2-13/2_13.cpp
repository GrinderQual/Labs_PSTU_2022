#include <cmath>
#include <iostream>

using namespace std;


int main () {
    
    double a, b, c, D, x1, x2, x, kD;
    cin >> a >> b >> c;
    
    D = (b*b) - (4 * a * c);
    kD = sqrt(D);
    
    if (D>0) {
        x1 = (-b + kD) / (2*a);
        x2 = (-b - kD) / (2*a);
        cout << "" << endl;
        cout << "x1 = " << x1;
        cout << "" << endl;
        cout << "x2 = " << x2;
    }
    
    if (D<0) {
        cout << "" << endl;
        cout << "DONT!DONT!NO DECISION!" << endl;
    }
    
    if (D==0) {
        x = (-b + 0) / (2*a);
        cout << "" << endl;
        cout << "Решение одно! x = " << x << endl;
    }
    
    return 0;
}