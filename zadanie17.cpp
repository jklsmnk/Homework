#include <iostream>

using namespace std;

int main()
{
	long long a, b;
	while (true)
	{
		cout << " Enter the number ";
		cin >> a;
		b = a;
		short k;
		cout << "Enter the number for delete ";
		cin >> k;
		long long w = -1, answer = 0;
		short t;
		while (b>0)
		{
			t = b % 10;
			if (t != k)
			{
				w++;
				answer = answer + t*pow(10, w);
			}
			else
				answer = answer + 0;
			b = b / 10;
		}
		cout << answer << endl;
		short ok;
		cout << "if exit press 0" << endl;
		cin >> ok;
		system("cls");
		if (ok == 0)
			return 0;
	}
}