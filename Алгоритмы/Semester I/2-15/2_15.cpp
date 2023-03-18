#include <iostream>

using namespace std;



int main() {
    
    int n, nx, sum, key, s;
    cout <<"Введите число n: " << endl;
    cin >> n;
    cout << "" << endl;
    cout << "Введите цифру s: " << endl;
    cin >> s;
    cout << "" << endl;
    
    sum = 0;
    key = 0;
    
    while (n > 0) {
        
        nx = n % 10;
        
        if (nx == s) {
            key = 1;    
        }
        
        n = n / 10;
        
    }
    
    cout << "" << endl;
    if (key==1) {
        cout << "Число s входит в запись числа n" << endl;
    }
    
    if (key == 0) {
        cout << "Число s не входит в запись числа n" << endl;
    }
    
    return 0;
}
