#include <iostream>
using namespace std;

int main()
{
	cout << "a-1" << endl;
	cout << "b-2" << endl;
	cout << "c-3" << endl;
	cout << "d-4" << endl;
	cout << "e-5" << endl;
	cout << "f-6" << endl;
	cout << "g-7" << endl;
	cout << "h-8" << endl;
	cout << "i-9" << endl;
	cout << "j-10" << endl;
	cout << "k-11" << endl;
	int op;
	cout << "Number of opperation" << endl;
	cin >> op;
	while (op > 11 || op <= 0)
	{
		cout << "input error" << endl;
		cout << "op=" << endl;
		cin >> op;
	}
	int n;
	cout << "n=";
	cin >> n;
	while (n <= 0)
	{
		cout << "input error" << endl;
		cout << "n=" << endl;
		cin >> n;
	}
	double i = 1;
	double p;
	switch (op)
	{
	case 1:
	{
		p = 1;
		while (n >= i)
		{
			p = p*i;
			i++;
		}
		cout << "p=" << p << endl;
		break;
	}
	case 2:
	{
		while (n == 0)
		{
			cout << "input error" << endl;
			cout << "n=" << endl;
			cin >> n;
		}
		p = 1;
		p = pow(2, n);
		cout << "p=" << p << endl;
		break;
	}
	case 3:
	{
		p = 0;
		while (n >= i)
		{
			p = p + (1 / i);
			i++;
		}
		cout << "p=" << p << endl;
		break;
	}
	case 4:
	{
		p = 0;
		while (n >= i)
		{
			p = p + (1 + (1 / (i*i)));
			i++;
		}
		cout << "p=" << p << endl;
		break;
	}
	case 5:
	{
		p = 0;
		int l = 1;
		while (n >= i)
		{
			p = p + (l / (i*(i + 1)));
			i++;
			l = -l;
		}
		cout << "p=" << p << endl;
		break;
	}
	case 6:
	{
		p = 0;
		while (n >= i)
		{
			p = p + (1 / pow(i, 5));
			i++;
		}
		cout << "p=" << p << endl;
		break;
	}
	case 7:
	{
		p = 0;
		while (n >= i)
		{
			p = p + (1 / pow((2 * i + 1), 2));
			i++;
		}
		cout << "p=" << p << endl;
		break;
	}
	case 8:
	{
		p = 0;
		while (n >= i)
		{
			p = p + (pow(-1, i) / (2 * i + 1));
			i++;
		}
		cout << "p=" << p << endl;
		break;
	}
	case 9:
	{
		p = 0;
		double denom = 0;
		double number = 1;
		while (n >= i)
		{
			number = number*i;
			denom = denom + (1 / i);
			p = p + (number / denom);
			i++;
		}
		cout << "p=" << p << endl;
		break;
	}
	case 10:
	{
		p = 2;
		for (i = 1; i <= n; i++)
		{
			p = sqrt(p + 2);
		}
		cout << "p=" << p << endl;
		break;
	}
	case 11:
	{
		p = 0;
		while (n >= i)
		{
			p = p + (1 / sin(i));
			i++;
		}
		cout << "p=" << p << endl;
		break;
	}
	}
	system("pause");
	return 0;
}