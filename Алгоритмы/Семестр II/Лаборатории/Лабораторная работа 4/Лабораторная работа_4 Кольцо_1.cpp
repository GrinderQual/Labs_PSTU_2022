
#include <iostream>

using namespace std;


int main () {
    
    int n, k1, k2, k3, key, magic, doublekey;
    
    cout << "Введите количество элементов массива (n) ";
    cin >> n;
    int a[n];
    
    cout << "" << endl;
    cout << "Далее введите сами элемента массива по порядку: " << endl;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    cout << "" << endl;
    cout << "Введите количество элементов, которые вы хотите увидеть из массива: ";
    cin >> k1;
    cout << "" << endl;
    cout << "Введите номер элемента с которого начнётся иллюстрация (от 1 до n): ";
    cin >> k2;
    cout << "" << endl;
    cout << "Введите 0 если хотите просмотреть массив справа налево; введите 1 если хотите просмотреть массив слева направо: ";
    cin >> k3;
    cout << "" << endl;
    
    key = k2 - 1;
    doublekey = n-1;
    magic=0;
    
    if (k2 > n || k2 < 1) {
        cout << "$^$$&%$RGDSGDSDK&J^&NYNDBTDVT ERROOOOORRRRR _I()&D)SGA)KEGKS!!!! Неправильно введён номер элемента!";
    }
    else {
        if (k3 == 1) {
            
            for (int i = 0; i < k1; i++) {
             if (key > doublekey) {
                 key = 0;
             }
             cout << a[key] << " ";
             key += 1;
            }
          
        }
        else {
            if (k3 == 0) {
                
            for (int i = k1; i > 0; i--) {
             if (key < magic) {
                 key = doublekey;
             }
             cout << a[key] << " ";
             key -= 1;
            }
            
            
            }
            else {
                cout << "EROR! Неправильно выбран способ отображение кольца! Попробуйте ещё раз!";
            }
        }
    }
    
    
    return 0;
}
