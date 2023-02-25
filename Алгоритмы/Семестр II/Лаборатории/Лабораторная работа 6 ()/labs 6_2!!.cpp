#include <iostream>
#include <string.h>

using namespace std;

int main () {
    
    string s;
    cout << "Введите строку, которую хотите проверить (латиница, русский алфавит сами подключайте): " << endl;
    getline (cin, s);
    
    int n;
    n = s.length();
    
    
    int count, x, min, max, e1, e2; count = 0;
    max = -10000;
    min = 100000;
    s += ' ';
    cout << s;
    
    for (int i = 0; i <= n; i++) {
        
        if (s[i] != ' ' && s[i] != '.' && s[i] != ',' && s[i] != '?' && s[i] != '!' && s[i] != ':' && s[i] != ';' && s[i] != '-') {
            
            count += 1;    
            
        }
        
        else {
            
            x = count;
            if (min>count && count != 0) { min = count; e2 = i; }
            if (max<count) { max = count; e1 = i; }
            
            count  = 0;
            
            
            
        
        
        }
        
    }
    
    cout << "" << endl;
    cout << "Максимальное количество символов в одном слове: " << max << " - ";
    for (int i = e1-max; i < e1; i++) {
        cout << s[i];    
    }
    cout << "" << endl;
    cout << "Минимальное количество символов в одном слове: " << min << " - ";
    for (int i = e2-min; i < e2; i++) {
        cout << s[i];    
    }
    cout << "" << endl;
    
    
    return 0;
}