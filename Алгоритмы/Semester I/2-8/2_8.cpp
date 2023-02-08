
#include <iostream>

using namespace std;


int main() {
    double middle, n, nk;
    cin >> n;

    cout << "" << endl;
    cout << "Треугольник: " << endl;
    cout << "" << endl;

    cout << "*" << endl;
    nk = n - 3;
    for (int i = 0; i < n - 2; i++) {
        cout << "*";
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        cout << "*" << endl;
    }
    for (int i = 0; i < n; i++) {
        cout << "*";
    }
    return 0;
}
