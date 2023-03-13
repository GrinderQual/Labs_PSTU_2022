#include <iostream>

using namespace std;

void print (char tower1, char tower2) {
    cout << tower1 << " -> " << tower2 << endl;
}

void move(int count, char tower1, char tower2, char tower3) {


    if (count == 0) {
        
        
        return;
    }
    move (count - 1, tower1, tower3, tower2);
    print (tower1, tower2);
    move (count - 1, tower3, tower2, tower1);
}

int main ( ) {
    
    int n;
    cin >> n;
    move (n, 'A', 'B', 'C');
    
    
    
    return 0;
}