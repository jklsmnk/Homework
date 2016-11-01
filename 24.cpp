#include <iostream>

using namespace std;

bool IsDataValid(double, double, int, int, int);
double FindApproxSum(double, double);
void ShowSumOnPosition(double, int, int, int);

int main()
{
	int h, a, b;
	double x, eps;
	while (true)
	{
		while (true)
		{
			cout << "Enter x (! = 0): ";
			cin >> x;
			cout << "Enter eps (0 < eps < 1): ";
			cin >> eps;
			cout << "Enter a: ";
			cin >> a;
			cout << "Enter b: ";
			cin >> b;
			cout << "Enter h: ";
			cin >> h;
			if (IsDataValid(x, eps, a, b, h)) 
				break;
			cout << "Incorrect, please, try again" << endl;
		}
		double sum = FindApproxSum(x, eps);
		cout << endl << "Approximate sum: " << sum;
		ShowSumOnPosition(x, a, b, h);
		system("pause");
	}
}

bool IsDataValid(double x, double eps, int a, int b, int h)
{
	if (x == 0) 
		return false;
	if (eps < 0 || eps >= 1) 
		return false;
	if (b <= a) 
		return false;
	if (h <= 0) 
		return false;
	return true;
}

double FindApproxSum(double x, double eps)
{
	int k = 0;
	double a = x / 3, sum = a;

	while (fabs(a) > eps)
	{
		k++;
		a = a*(k + 1)(-1)*x / 3 / k;
		sum += a;
	}
	return sum;
}

void ShowSumOnPosition(double x, int first, int last, int h)
{
	int k = 0;
	double a = x / 3, sum = a;
	while (k < first)
	{
		k++;
		a = a*(k + 1)(-1)*x / 3 / k;
		sum += a;
	}
	cout << endl << k << "  " << sum;
	while (k <= last)
	{
		k += h;
		à = à*(ê + 1)(-1)*õ / 3 / ê;
		sum += a;
		cout << endl << k << "  " << sum << endl;
	}
}