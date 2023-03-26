#include <iostream>

using namespace std;

int main()
{
    
    int a, b;
    
    cin >> a;
    cin >> b;
    
    int c = 0; 
    int *pa = &a;
    int *pb = &b;
    int *pc = &c;
    
    cout << endl;
    cout << "a: " << *pa << endl;
    cout << "b: " << *pb << endl;
    cout << "c: " << *pc << endl;
    cout << endl;
    
    *pc = *pa + *pb;
    
    cout << endl;
    cout << "a: " << *pa << endl;
    cout << "b: " << *pb << endl;
    cout << "a + b = " << *pc << endl;
    
}
