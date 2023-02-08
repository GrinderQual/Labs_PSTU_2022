

#include <iostream>

using namespace std;


int main () {
    int n, nk, nmk, nkvd, nkvd2;
    cin >> n;
    
    cout << "" << endl;
    cout << "Куб: " << endl;
    cout << "" << endl;
    
    if (n % 2 != 0) {
        nk = n / 2 + 1;
    }
    else {
        nk = n / 2;
    }
    nmk = nk - 1;
    
    for (int i = 0; i < nk; i++) {
        cout << " ";
    }
    for (int i = 0; i < n; i++) {
        cout << "*";
    }
    cout << "" << endl;
    
    for (int i = 1; i <= nmk; i++) {
        for (int j = 0; j < nk-i; j++) {
            cout << " ";
        }
        cout << "*";
        for (int j = 0; j < n-2; j ++) {
            cout << " ";
        }
        cout << "*";
        for (int j = 1; j < i; j++) {
            cout << " ";
        }
        cout << "*";
        cout << "" << endl;
    }
    for (int i = 0; i < n; i++) {
        cout << "*";
    }
    for (int i = 0; i < nmk; i ++) {
        cout << " ";
    }
    cout << "*";
    cout << "" << endl;
    
    nkvd = n - 1 - nk;
    for (int i = 0; i<nkvd; i++) {
        cout << "*";
        for (int j = 0; j < n-2; j++) {
            cout << " "; 
        }
        cout << "*";
        for (int j = 0; j < nmk; j++) {
            cout << " ";
        }
        cout << "*";
        cout << "" << endl;
    }
    
    for (int i = 1; i <= nmk; i++) {
        cout << "*";
        for (int j = 0; j < n-2; j++) {
            cout << " "; 
        }
        cout << "*";
        for (int j = nmk; j > i; j--) {
            cout << " ";
        }
       cout << "*" << endl; 
    }
    for (int i = 0; i < n; i++) {
        cout << "*";
    }
    
    cout << "" << endl;
    cout << "nk=" << nk << " nmk=" << nmk;
    return 0;
}

