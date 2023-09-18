
#include <iostream>

using namespace std;


int main () {
    
    int n, k1, k2, k3, key, magic, doublekey, boy;
    
    cout << "Введите количество элементов массива (n) ";
    cin >> n;
    int a[n];
    
    int b[n+4];
    
    cout << "" << endl;
    cout << "Далее введите сами элемента массива по порядку: " << endl;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "Давайте добавим пару элементов в массив" << endl;
    
    for (int i = n-1; i >= 0; i--) {
        a[i+1] = a[i];
    }
    cout << "Введите новый элемент первого номера: " << endl;
    cin >> boy;
    a[0] = boy;
    cout << "А давайте введём ещё три элемента для конца массива: " << endl;
    for (int i = n+1; i <= n+3; i++) {
        cin >> boy;
        a[i] = boy;
    }
    
    cout << "" << endl;
    k1 = n+4;
    cout << "Введите номер элемента с которого начнётся иллюстрация (от 1 до n+4): ";
    cin >> k2;
    cout << "" << endl;
    k3 = 1;
    
    cout << "" << endl;
    
    key = k2 - 1;
    doublekey = (n+4)-1;
    magic=0;
    
    if (k2 > (n+4) || k2 < 1) {
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
