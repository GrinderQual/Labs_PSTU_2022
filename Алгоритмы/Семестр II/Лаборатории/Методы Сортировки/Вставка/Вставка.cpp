#include <iostream>

using namespace std;

int main() {
    int n, m;
    n = 11;
    int arr[n] = { 41, 420, 66, 87, 186, 38, 77, 84, 45, 35, 22 };
    for (int i = 1; i < n; i++) {
        m = arr[i];
        for (int j = i; j >= 0 && arr[j - 1] > m; j--) {
            arr[j] = arr[j - 1];
            arr[j - 1] = m;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
