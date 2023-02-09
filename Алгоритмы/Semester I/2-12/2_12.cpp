
#include <iostream>

using namespace std;


int main () {
    
    int n, m, mk, min, max;
    cin >> n;
    If (n>0) {
        cin >> m;
    }
    
    min = m;
    max = m;
    
    for (int i = 0; i < n; i++) {
        cin >> m;
        if (max<m) {
            max = m;
        }
        if (min>m) {
            min = m;
        }
    }
    
    mk = min + max;
    
    cout << "" << endl;
    cout << "Summa = " << mk;
    
    return 0;
}
