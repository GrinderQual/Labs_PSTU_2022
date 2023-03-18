#include <iostream>
#include <cmath>

using namespace std;



int main() {
    
    int i1, key, s11, q11;
    double q, q1, n, s;
    
    cout << "Введите перменную: ";
    cin >> n;
    cout << endl;
    cout << "Введите кол-во элементов: ";
    cin >> i1;
    cout << endl;
    cout << "Задайте элемент поиска: ";
    cin >> s;
    cout << endl;
    
    key = 0;
    cout << "Элементы: ";
    for (int i = 1; i <= i1; i++) {
        
        q1 = i/n;
        q = sin(n + q1);   
        
        cout << q << " ";
        
        s11 = (s*100000);
        q11 = q * 100000;
        if (s11==q11) { key = 1; } 
    }
    
    
    

    
    if (key == 1) {
        cout << "Да, среди этих элементов есть заданный";
    }
    if (key == 0) {
        cout << "Нет, я не нашёл заданного элемента";
    }
    
    
    return 0;
}