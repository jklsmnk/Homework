#include <iostream>

using namespace std;

int main()
{
	long long n;
	while (true)
	{

		cout << "Enter n = ";
		cin >> n;
		long long m = abs(n), w = 0;
		while (m)
		{
			short o = m % 10;
			w = w * 10 + o;
			m = m / 10;
		}
		if (w == abs(n))
			cout << n << " - polindrome\n";
		else
			cout << n << " - not a polindrome\n";
		short ok;
		cout << "if exit enter 0 ";
		cin >> ok;
		system("cls");
		if (ok == 0)
			return 0;
	}
}