#include <iostream>

using namespace std;



int main() {
    
    int n, nx, sum;
    cin >> n;
    sum = 0;
    
    while (n > 0) {
        nx = n % 10;
        sum += nx;
        n = n / 10;
    }
    
    cout << "" << endl;
    cout << "Summa = " << sum << endl;
    
    return 0;
}
