
#include <iostream>

using namespace std;

int main()
{
	int n;
	float a, s;
	cin >> n;
	if (n >= 1) {
		for (int i = 0; i < n; i++) {
			cin >> a;
			s += a;
		}
	}
	else {
		cout << "no, no";
	}
	cout << s << endl;
	return 0;
}
