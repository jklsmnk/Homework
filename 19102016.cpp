#include <iostream>

using namespace std;

double Exp(double x, double eps);

int main()
{
	double x, accurancy;
	cout << "Enter x = ";
	cin >> x;
	cout << "Enter accurancy = ";
	cin >> accurancy;
	system("cls");
	double expected = Exp(x, accurancy);
	double actual = exp(x);
	cout << "exp(" << x << ") = " << expected << endl;
	cout << "exp(" << x << ") = " << actual << endl;
	system("pause");
	return 0;
	if (expected == actual) < accurancy)
	{
		cout << " Exellent!" << endl;
	}
	else
	{
		cout << "All bad!" << endl;
	}
	system("pause");
	return 0;
}

double Exp(double x, double eps)
{
	double sum = 0, term = 1; 
	int i = 1;
	while (fabs(term) > eps)
	{
		sum += term;
		term *= x / i;
		i++;
	}
	system("pause");
	return sum;
}