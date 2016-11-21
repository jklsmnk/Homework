#include <iostream>

using namespace std;

void Function1(int a[], int n, bool&les, bool&gr, bool&eq);
void Function2(bool les, bool gr, bool eq);
void EnterArray(int a[], int n);
void DisplayArray(int a[], int n);

const int N = 100;

int main()
{
	int a[N] = { 0 };
	int n;
	while (true)
	{
		cout << "Enter n > 0 and n <= " << N << ": ";
		cin >> n;
		if (n > 0 && n <= N)
			break;
		else
			cout << "Input Error! Tray again!" << endl;

	}

	EnterArray(a, n);
	DisplayArray(a, n);
	system("cls");
	bool les = false, gr = false, eq = false;
	Function1(a, n, les, gr, eq);
	Function2(les, gr, eq);
	system("pause");
	return 0;
}

void Function1(int a[], int n, bool&les, bool&gr, bool&eq)
{
	for (int i = 0; i < n - 1; i++)
	{
		if (a[i] < a[i + 1]) 
			les = true;
		else 
			if (a[i] > a[i + 1]) 
			gr = true;
		else 
			eq = true;
	}
}

void Function2(bool les, bool gr, bool eq)
{
	if (les && gr && eq)
		cout << "The sequence is not ordered" << endl;
	if (les && !gr && eq)
		cout << "The sequence is not strictly increasing" << endl;
	if (!les && gr && eq)
		cout << "The sequence is not strictly decreasing" << endl;
	if (les && !gr && eq)
		cout << "The sequence is strictly increasing" << endl;
	if (!les && gr && eq)
		cout << "The sequence is strictly decreasing" << endl;
	if (!les && !gr && eq)
		cout << "The sequence is monotonous" << endl;
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
