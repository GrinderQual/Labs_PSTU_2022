#include <iostream>

using namespace std;

int main()
{
    
    int n, falseI;
    
    cout << "Введите перменную: " << endl;
    
    cin >> n;
    
    int kr = 1;
    
    int *pn = &n;
    int *pr = &kr;
    int *pi = &falseI;
    for (int i = 1; i <= n; i++) {
        
        *pi = i;
        *pr *= *pi;;   
    }
    
    cout << *pr << endl;
    
}
