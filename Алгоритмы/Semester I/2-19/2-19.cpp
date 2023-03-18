#include <iostream>

using namespace std;



int main() {
    
    int n, s;
    
    cout << "Введите количество суммируемых элементов: ";
    cin >> n;
    cout << endl;
    cout << endl;
    
    for (int i = 1; i <= n; i++) {
        
        if (i % 3 == 0) {
            s = s - i;
        }
        if (i % 3 != 0) {
            s = s + i;
        }
    }
    
    cout << "Ответ: " << s;
    
    return 0;
}