
#include <iostream>

using namespace std;

int main()
{
	int n;
	float a, d;
	cin >> n;
	d = 1;
	if (n >= 1) {
		for (int i = 0; i < n; i++) {
			cin >> a;
			d *= a;
		}
	}
	else {
		cout << "no, no";
	}
	cout << d << endl;
	return 0;
}

