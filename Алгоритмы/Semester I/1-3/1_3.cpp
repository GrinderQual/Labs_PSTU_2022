
#include <iostream>

using namespace std;

int main()
{
	float a, c;
	cin >> a;
	if (a < 5) {
		c = a * 3;
	}
	if (a >= 5 && a <= 7) {
		c = a / 10;
	}
	if (a > 7) {
		c = a + 3;
	}
	cout << c << endl;
}

