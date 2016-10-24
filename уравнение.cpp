#include<iostream> 

using namespace std;

int main()
{
	double a, b, c;
	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;
	cout << "c: ";
	cin >> c;

	if (a == 0)
	{
		cout << "Input error!" << endl;
		system("pause");
		return 0;
	}

	if (a == 1 && b == 0)
	{
		cout << " x^2 + " << c << " = 0" << endl;
		system("pause");
		return 0;
	}
	if (a == 1 && c == 0)
	{
		cout << " x^2 + " << b << " * x = 0" << endl;
		system("pause");
		return 0;
	}
	if (a == 1 && b == 0 && c == 0)
	{
		cout << " x^2 = 0" << endl;
		system("pause");
		return 0;
	}

	if (a == -1 && c == 0)
	{
		cout << " - x^2 + " << b << " * x = 0" << endl;
		system("pause");
		return 0;
	}
	if (a == -1 && b == 0 && c == 0)
	{
		cout << " - x^2 = 0" << endl;
		system("pause");
		return 0;
	}
	if (a == -1 && b == 0)
	{
		cout << " - x^2 +" << c << " = 0" << endl;
		system("pause");
		return 0;
	}

	if (a == -1)
	{
		cout << " - x^2 + " << b << " * x + " << c << " = 0" << endl;
		system("pause");
		return 0;
	}
	if (a == 1)
	{
		cout << " x^2 + " << b << " * x + " << c << " = 0" << endl;
		system("pause");
		return 0;
	}
	else
		if (b == 0 && c == 0)
		{
			cout << a << " * x^2 = 0 " << endl;
			system("pause");
			return 0;
		}
	if (b == 0)
	{
		cout << a << " * x^2 + " << c << " = 0" << endl;
		system("pause");
		return 0;
	}
	if (c == 0)
	{
		cout << a << " * x^2 + " << b << " * x" << " = 0" << endl;
		system("pause");
		return 0;
	}

	if (b < 0 && c < 0)
	{
		cout << a << " * x^2 " << b << " * x " << c << " = 0" << endl;
		system("pause");
		return 0;
	}
	if (b < 0)
	{
		cout << a << " * x^2 " << b << " * x + " << c << " = 0" << endl;
	}
	if (c < 0)
	{
		cout << a << " * x^2 + " << b << " * x " << c << " = 0" << endl;
		system("pause");
		return 0;
	}
	if (b < 0 && c == 0)
	{
		cout << a << " * x^2 " << b << " * x " << " = 0" << endl;
		system("pause");
		return 0;
	}
	if (c < 0 && b == 0)
	{
		cout << a << " * x^2 + " << " * x " << c << " = 0" << endl;
		system("pause");
		return 0;
	}
	else
	{
		cout << a << " * x^2 + " << b << " * x + " << c << " = 0" << endl;
		system("pause");
		return 0;
	}
	system("pause");
	return 0;
}