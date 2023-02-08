
#include <iostream>

using namespace std;


int main () {
    double middle, n;
    cout << "Введите количество ячеек (min = 2): ";
    cin >> n;
    cout << "" << endl;
    cout << "Square B:" << endl;
    cout << "" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "*";
        }
        cout << "" << endl;
    }
    
    return 0;
}
