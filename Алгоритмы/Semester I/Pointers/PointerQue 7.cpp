
#include <iostream>

using namespace std;

int main()
{
	int n = 0;

	int* pn = &n;
	cout << "Ну введите переменную что ли: ";
	cin >> *pn;

	cout << endl;
	cout << "А вот и всё: ";
	cout << *pn;


	return 0;
}
