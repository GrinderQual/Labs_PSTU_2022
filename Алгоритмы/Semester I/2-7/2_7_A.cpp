#include <cmath>
#include <iostream>

using namespace std;


int main () {
    double middle, n;
    cout << "Введите количество ячеек (чётное число из которого можно извлечь квадратный корень; min = 4): ";
    cin >> n;
    cout << "" << endl;
    cout << "Square A:" << endl;
    cout << "" << endl;
    middle = sqrt(n);
    for (int i = 0; i < middle; i++) {
        for (int j = 0; j < middle; j++) {
            cout << "*";
        }
        cout << "" << endl;
    }
    
    return 0;
}
