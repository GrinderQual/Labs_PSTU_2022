#include <iostream>

using namespace std;



int main() {
    
    float n, x, i1, x1;
    float s, s1;
    
    cout << "Введите значение переменной x: ";
    cin >> x;
    cout << endl;
    cout << endl;
    cout << "Введите количество операций: ";
    cin >> n;
    cout << endl;
    cout << endl;
    
    s = 1 + x;
    x1 = x;
    x *= x;
    i1 = 2;
    
    for (int i = 3; i <= n; i++ ) {
        
        s1 = (x / i1);
        s = s + s1;
         
         
        i1 = i1*i;
        x = x * x1;
        
        
    }
    
    cout << "Итог: " << s;
    
    return 0;
}
