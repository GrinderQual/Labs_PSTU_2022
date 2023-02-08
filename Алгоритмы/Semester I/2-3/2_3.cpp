
#include <iostream>

using namespace std;

int main()
{
	int n, v, item, fin;
	v = 2;
	item = 1;
	fin = 0;
	cin >> n;
	cout << "" << endl;
	cout << "Промежуточные подсчёты:" << endl;
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= v; j++) {
			item = item * j;
		}
		v += 2;
		cout << i << ". " << item << endl;
		fin += item;
		item = 1;
	}
	cout << "" << endl;
	cout << "Итог: " << fin << endl;
	return 0;
}
