#include <iostream>
#include <cmath>

using namespace std;



int main() {
    
    int c, k, key;
    
    cin >> c;
    if (c == 0) { cout << "Конец, не вижу ряда чисел"; }
    
    key = 1;
    
    while (c != 0) {
        
        k = c;
        cin >> c;
        if (c <= k && c != 0) {
            key = 0;
        }
        
        
    }
    
    cout << endl;
    
    if (key == 0) {
        cout << "Не упорядочены по возрастанию";
    }
    else {
        cout << "Упорядочены по возрастанию";
    }
    
    return 0;
}