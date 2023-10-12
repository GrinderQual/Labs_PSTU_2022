#include <iostream>
#include <stdarg.h>
#include <cmath>

using namespace std;

void Kvadr(int cnt, ...) {

    int a1, a2;

    va_list f;
    va_start(f, cnt);



    for (int i = cnt; i > 0; i--) {

        int t = va_arg(f, int);
        a1 = 1;
        a2 = 3;

        while (a1 < t) {
            a1 += a2;
            a2 += 2;
        }

        if (t == a1) cout << "The nubmer " << t << " true" << endl;
        else cout << "The nubmer " << t << " false" << endl;

    }


    va_end(f);



    return;


}

int main()
{
    int n1 = 3, n2 = 7, n3 = 11;
    int a1, a2, a3;
    int b1, b2, b3, b4, b5, b6, b7;
    int c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11;

    cout << "Input three digits: ";
    cin >> a1 >> a2 >> a3;
    Kvadr(n1, a1, a2, a3);
    cout << endl;

    cout << "Input senev digits: ";
    cin >> b1 >> b2 >> b3 >> b4 >> b5 >> b6 >> b7;
    Kvadr(n2, b1, b2, b3, b4, b5, b6, b7);
    cout << endl;

    cout << "Input eleven digits: ";
    cin >> c1 >> c2 >> c3 >> c4 >> c5 >> c6 >> c7 >> c8 >> c9 >> c10 >> c11;
    Kvadr(n3, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11);
    cout << endl;


    return 0;
}

