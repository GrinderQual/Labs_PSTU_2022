#include <iostream>
using namespace std;
int main()
{
	int m, n, min, m1;
	n = 11;
	min = 0;
	int arr[n] = { 41, 42, 66, 87, 86, 38, 77, 84, 45, 35, 22 };
	for (int i = 0; i < n; i++) {
		min = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[min] > arr[j]) {
				min = j;
			}
		}
		swap(arr[i], arr[min]);
	}
	cout << "" << endl;
	for (int u = 0; u < n; u++)

	{
		cout << arr[u] << " ";
	}
	cout << endl;
	return 0;
}
