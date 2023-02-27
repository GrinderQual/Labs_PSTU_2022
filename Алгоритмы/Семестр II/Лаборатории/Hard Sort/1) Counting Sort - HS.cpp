#include <iostream>

using namespace std;



int main () {
    
    int size;
    cin >> size;
    int a[size];
    for (int i = 0; i < size; i++) {
        cin >> a[i];
    }
    
    int *output = new int[size];
    int *count;
    int max = a[0];
    
    for (int i = 1; i < size; i++) {
        
        if (a[i]>max) { max = a[i]; }    
        
    }
    
    count = new int[max + 1];
    
    for (int i = 0; i <= max; i++) {
        
        count[i] = 0;    
        
    }
    
    for (int i = 0; i < size; i++) {
        
        count[a[i]]++;    
        
    }
    
    for (int i = 1; i <= max; i++) {
        
        count[i] += count[i-1];   
        
    }
    
    for (int i = size-1; i >= 0; i--) {
        
        output[count[a[i]]-1] = a[i];
        count[a[i]]--;
        
    }
    
    for (int i = 0; i < size; i++) {
        
        a[i]=output[i];
        
    }
    
    delete[] output; 
    delete[] count;
    
    for (int i = 0; i < size; i++) {
        
        cout << a[i] << " ";
        
    }    
    
    
    
    
    return 0;
}
