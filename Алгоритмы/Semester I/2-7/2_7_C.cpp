
#include <iostream>

using namespace std;


int main () {
    double middle, n;
    cout << "Введите количество ячеек (min = 2): ";
    cin >> n;
    cout << "" << endl;
    cout << "Square C:" << endl;
    cout << "" << endl;
    for (int i = 0; i < n; i++) {
        cout << "* "; // пробел после звёздочки для красоты картины, можно убрать
    }
    cout << "" << endl;
    for (int i = 0; i < n-2; i++) {
        cout << "*";
        for (int j = 0; j < n-2; j++) {
            cout << "  "; // двойной пробел для более красивой картинки в итоге, если оставить один всё будет норм
        }
        cout << " "; // этот пробел тоже для красоты картинки, его для правильной картины тоже надо убрать
        cout << "*";
        cout << "" << endl;
    }
    
    for (int i = 0; i < n; i++) {
        cout << "* "; // то же самое
    }
    return 0;
}
