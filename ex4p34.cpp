#include <iostream>

using namespace std;

void Swap(int &a, int &b);

int main()
{
	const int N = 100;
	int a[N] = { 0 };
	int n;
	while (true)
	{
		cout << "Enter n > 0 and n <= " << N << ": ";
		cin >> n;
		if (n > 0 && n <= N) 
			break;
		cout << "Input eurror!";
	}

	for (int i = 0; i < n; i++)
	{
		cout << "a[" << (i + 1) << "] = ";
		cin >> a[i];
	}
	system("cls");
	cout << "Source: " << endl;
	
	for (int i = 0; i < n; i++)
		cout << a[i] << ", ";

	for (int i = 0; i < n / 2; i++)
		Swap(a[i], a[n - 1 - i]);
	cout << endl << "Inverted: " << endl;

	for (int i = 0; i < n; i++)
		cout << a[i] << ", ";
	system("pause");
	return 0;
}

void Swap(int &a, int &b)
{
	int t = a;
	a = b;
	b = t;
}