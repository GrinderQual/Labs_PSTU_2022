

#include <iostream>

using namespace std;



int main() {
    
    int n, s;
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
    
        if (i % 2 != 0) {
            s -= i;
        }
    
        if (i % 2 == 0) {
            s += i;
        }
        
    }
    
    cout << "" << endl;
    cout << s << endl;
    
    return 0;
}
