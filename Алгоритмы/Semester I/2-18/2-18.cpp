#include <iostream>

using namespace std;



int main() {
    
    int n, n1, n2, nk, i;
    
    cin >> n;
    
    n1 = 0;
    n2 = n;
    i = 1;
    
    while (n > 0) {
        
        i *= 10;
        
        n = n / 10;
        
    }
    
    i = i / 10;
    
    while (n2 > 0) {
        
        nk = n2 % 10;
        
        n1 = n1 + nk*i;
        
        i /= 10;
        
        n2 = n2 / 10;
        
    }
    
    cout << endl;
    cout << n1 << endl;
    
    return 0;
}