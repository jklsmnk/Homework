#include <iostream>

using namespace std;

void EnterArray(int a[], int n);
void RandomArray(int a[], int n);
void DisplayArray(int a[], int n);
void LessThen(int a[], int n , int number, bool &ok);


int main()
{
	const int N = 100;
	int a[N] = { 0 };
	int n;
	while (true)
	{
		cout << "Enter n > 0 and n <= N: " ;
		cin >> n;
		if (n > 0 && n < 100) break;
		else
			cout << "Input error! Please,try again!" << endl;
	}
	system("cls");
	RandomArray(a, n);
	DisplayArray(a, n);
	cout << endl;
	int number;
	cout << "Enter number to compare with elements of the array: ";
	cin >> number;
	bool ok = false;
	LessThen(a, n, number, ok);
	if (ok == false)
	cout << "There is no elements less then your number! " << endl;
	system("pause");
	return 0;
}


void RandomArray(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 10;
	}
}

void EnterArray(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << (i + 1) << "] = ";
		cin >> a[i];
	}
}

void DisplayArray(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}

void LessThen(int a[], int n, int number, bool &ok)
{
	for (int i = 0; i < n; i++)
		if (a[i] < number)
		{
			ok = true;
			return a;
			
		}
}