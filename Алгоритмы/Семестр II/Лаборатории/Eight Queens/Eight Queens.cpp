#include <iostream>

using namespace std;

int a[10];
int count = 0;

bool canPlace (int k, int i) {
    
    for (int j = 1; j <= k; j++) {
        
        if ((a[j] == i) || (abs(a[j] - i) == abs(j-k))) {
            return false;
        }
        
    }
    return true;
}

void print (int n) {
    
    cout << "Reshenie #" << ++count << endl;
    for (int i = 1; i<= n; i++ ){
        for (int j = 1; j <= n; j++) {
            if (a[i] != j) {
                cout <<"\t -";
            }
            else {
                cout << "\t *";
            }
        } 
        cout <<endl;
    }
    
    
    
    
}

void Ferz(int k, int n) {
    
    for (int i = 1; i <= n; i++) {
    
        if (canPlace(k,i)) {
            a[k] = i;
            if (k == n) {
            
                if (count < 1) print(n);
               
            }
            else {
                Ferz (k+1, n);
            }
        }
        
    }
    
    
}

int main()
{   
    
    cout << "Решение 1 из 92 и из 34 доступных данной пограммой, для доступа к 33 оставшимся убрать [if] в 48 строке" << endl;
    cout << endl;
    int n = 8;
    Ferz (1, n);
    
    
    return 0;
}