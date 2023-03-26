#include <iostream>

using namespace std;

int main()
{
    
    int a, b;
    
    cin >> a;
    cin >> b;
    
    
    int *pa = &a;
    int *pb = &b;
    int c = b;
    
    cout << endl;
    cout << "a: " << *pa << endl;
    cout << "b: " << *pb << endl;
    cout << endl;
    
    *pb = a;
    *pa = c;
    
    cout << endl;
    cout << "a: " << *pa << endl;
    cout << "b: " << *pb << endl;
    
}
