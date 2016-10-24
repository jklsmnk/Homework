#include <iostream>

using namespace std;

int main()
{
	long long a, b;
	while (true)
	{
		cout << "Enter the number ";
		cin >> a;
		b = a;
		short r, t;
		cout << "Enter the number for change ";
		cin >> r;
		cout << "Enter the number on what change " ;
		cin >> t;
		long long w = -1, answer = 0;
		short o;
		while (b>0)
		{
			o = b % 10;
			w++;
			if (o != r)
				answer = answer + o*pow(10, w);
			else
				answer = answer + t*pow(10, w);
			b = b / 10;
		}
		cout << answer << endl;
		short ok;
		cout << "if exit press 0 " << endl;
		cin >> ok;
		system("cls");
		if (ok == 0)
			return 0;
	}
}