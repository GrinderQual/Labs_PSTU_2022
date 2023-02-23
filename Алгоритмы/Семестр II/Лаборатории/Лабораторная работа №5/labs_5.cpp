#include <iostream>

using namespace std;

int main () {
    
    int n, ch, i1, j1, z, hran, max;
    int m;
    cout << "Ввидите количество строк в матрцие: " << endl;
    cin >> n;
    cout << "Ввидите количество столбцов в матрцие: " << endl;
    cin >> m;
    cout << "" << endl;
    
    cout << "Введите элементы массива: " << endl;
    cout << "" << endl;
    int a[n][m];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    
    cout << "" << endl;
    
    i1=0;
    j1=0;
    z = 0;
    max = -123456;
    
    for (int eq = 0; eq < n*m; eq++) {
        
        ch = a[i1][j1];
        
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (ch == a[i][j]) {
                    z = z + 1;
                }   
            }
        }
        
        if (z > 1) {
            hran = ch;
            if (max<hran) {
                max = hran;
            }
        }
        
        
        j1 += 1;
        if (j1 == m) {
            i1 += 1;
            j1 = 0;
        }
        
        z = 0;
        
    }
    
    
    cout << max << endl;
    
    return 0;
}