#include <iostream> 

using namespace std;

const int N = 100;

void RandomArray(int a[], int n);
void ShiftRight(int a[], int n);
void ShiftLeft(int a[], int n);
void DisplayArray(int a[], int n);
void kShift(int a[], int n);

int main()
{
	const int N = 100;
	int a[N] = { 0 };
	int n;
	while (true)
	{
		cout << "Enter n > 0 and n <= N: ";
		cin >> n;
		if (n > 0 && n < 100) break;
		else
			cout << "Input error! Please,try again!" << endl;
	}
	system("cls");
	RandomArray(a, n);
	DisplayArray(a, n);
	cout << endl;
	kShift(a, n);
	DisplayArray(a, n);
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

void DisplayArray(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}

void ShiftRight(int a[], int n)
{
	int temp = a[n - 1];
	for (int i = n - 2; i >= 0; i--)
	{
		a[i + 1] = a[i];
	}
	a[0] = temp;
}
void ShiftLeft(int a[], int n)
{
	int temp = a[0];
	for (int i = 0; i <= n - 1; i++)
	{
		a[i] = a[i + 1];
	}
	a[n - 1] = temp;
}

void kShift(int a[], int n)
{
	int k, b;
	cout << "if you want to shift to right enter 1, else to left enter 2: ";
	cin >> b;
	cout << "Enter shift element k = ";
	cin >> k;
	for (int i = 1; i <= k; i++)
	{
		switch (b)
		{
		case 1:
			ShiftRight(a, n);
			break;
		case 2:
			ShiftLeft(a, n);
			break;
		}
	}

}


