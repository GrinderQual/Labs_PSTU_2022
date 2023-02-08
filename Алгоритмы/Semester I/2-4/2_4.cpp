

#include <iostream>

using namespace std;


int main()
{
	int n, high, middle, randy;
	cin >> n;
	middle = n / 2;
	randy = 1;
	cout << "" << endl;
	cout << "Triangle:" << endl;
	cout << "" << endl;
	for (int i = 0; i < middle; i++) {
		cout << " ";
	}
	cout << "*" << endl;
	for (int i = 1; i <= middle - 1; i++) {
		for (int j = 0; j < middle - i; j++) {
			cout << " ";
		}
		cout << "*";
		for (int j = 0; j < randy; j++) {
			cout << " ";
		}
		cout << "*" << endl;
		randy += 2;
	}
	for (int i = 0; i < n; i++) {
		cout << "*";
	}
	return 0;
}

