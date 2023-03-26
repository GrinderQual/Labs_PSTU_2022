#include <iostream>

using namespace std;

int main() {
    
    int x, n, max, min;
    
    cout << "Введите количество элементов последовательности: ";
    cin >> n;
    cout << endl;
    max = -10000;
    min = 10000;
    if (n > 0) {
        cout << "Введите первый элементпоследовательности -10000<x<10000: ";
        cin >> x;
        
        int *px = &x;
        int *pmin = &min;
        int *pmax = &max;
        if (*pmax<*px) *pmax = *px;
        if (*pmin>*px) *pmin = *px;
        cout << "Вводите даллее ";
        
        for (int i = 1; i < n; i++) {
            
            cin >> *px;
            if (*pmax<*px) *pmax = *px;
            if (*pmin>*px) *pmin = *px;
            
            
            
            
        }
        
        cout << "Max: " << *pmax << endl;
        cout << "Min: " << *pmin << endl;
        
    }
    
    
    
    return 0;
}

