#include <iostream>

using namespace std;

int main()
{
    
    double a, b;
    
    cin >> a;
    cin >> b;
    
    double c = 0; 
    double *pa = &a;
    double *pb = &b;
    double *pc = &c;
    
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
