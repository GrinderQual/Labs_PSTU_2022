#include <iostream>

using namespace std;


int main()
{
	int m, n, min, m1;
	n = 11;
	int arr[n] = { 41, 42, 66, 87, 86, 38, 77, 84, 45, 35, 22 };
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
			}
		}
	}
	cout << "" << endl;
	for (int u = 0; u < n; u++)

	{
		cout << arr[u] << " ";
	}
	cout << endl;
	return 0;
}
