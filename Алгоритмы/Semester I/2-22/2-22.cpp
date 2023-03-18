#include <iostream>
#include <cmath>

using namespace std;



int main() {
    
    int i1, key, s11, q11, iod;
    double q, q1, n, s, max;
    
    cout << "Введите перменную: ";
    cin >> n;
    cout << endl;
    cout << "Введите кол-во элементов: ";
    cin >> i1;
    cout << endl;
    
    max = -2;
    key = 0;
    cout << "Элементы: ";
    for (int i = 1; i <= i1; i++) {
        
        q1 = i/n;
        q = sin(n + q1);   
        
        cout << q << " ";
        
        
        if (max<q) { 
            
            max = q;
            iod = i;
            
        } 
    }
    
    
    

    cout << endl;
    cout << "Максимальный элемент: " << max << " Его номер в последовательности: " << iod << endl;
    
    
    return 0;
}