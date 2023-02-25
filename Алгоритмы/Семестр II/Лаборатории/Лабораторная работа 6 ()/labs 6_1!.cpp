#include <iostream>
#include <string>

using namespace std;

int main () {
    
    string s;
    cout << "Введите латиницей слово, которое вы хотите проверить на поллидром: " << endl;
    getline (cin, s);
    
    int count;
    count = s.length();
    
    int mazafaka, n;
    mazafaka = 1;
    n = count - 1;
    
    for (int i = 0; i < count - 1; i++) {
        
        if (s[i]!=s[n]) {
            
            mazafaka = 0;    
    
        }   
    
        n -= 1;
    }
    
    if (mazafaka == 1) cout << "Поллидром" << endl;
    if (mazafaka == 0) cout << "Не поллидром" << endl;
    
    
    
    return 0;
}