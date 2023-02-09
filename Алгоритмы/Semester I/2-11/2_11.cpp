
#include <iostream>

using namespace std;


int main () {
    int n, m, mk;
    cin >> n;
    mk = -1;
    for (int i = 0; i < n; i++) {
        cin >> m;
        if (mk == -1 && m>0) {
            mk = 1;
        }
        else if (mk == -1 && m<0) {
            mk = 0;
        }
    }
    
    cout << "" << nedl;
    if (mk == 1) {
        cout << "First - Положительные!";
    }
    if (mk == 0) {
        cout << "First - Отрицательные";
    }
    if (mk == -1) {
        cout << "All is ZERO";
    }
    return 0;
}
