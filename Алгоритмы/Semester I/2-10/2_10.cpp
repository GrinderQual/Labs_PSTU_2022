
#include <iostream>

using namespace std;


int main () {
    int n, m, max;
    cin >> n;
    cin >> m;
    max = m;
    for (int i = 1; i < n; i++) {
        cin >> m;
        if (max < m) {
            max = m;
        }
    }
    cout << "Maxi: " << max;
    
    return 0;
}
