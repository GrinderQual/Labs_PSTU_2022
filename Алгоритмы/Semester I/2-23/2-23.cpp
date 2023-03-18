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
    iod = 0;
    cout << "Элементы: ";
    
    for (int i = 1; i <= i1; i++) {
        
        q1 = i/n;
        q = sin(n + q1);   
        
        cout << q << " ";
        
        
        if (max<q) { 
            
            max = q;
            
        } 
    }
    
    for (int i = 1; i <= i1; i++) {
        
        q1 = i/n;
        q = sin(n + q1); 
        
        
        if (max==q) { 
            
            iod += 1;
            
        } 
    }
    
    
    

    cout << endl;
    cout << "Максимальных элементов: " <<  iod << " штук" << endl;
    
    
    return 0;
}