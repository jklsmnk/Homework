#include <iostream>

using namespace std;

const int  A = 50, B = 50;

void EnterMatrix(int matrix[][B], int n);
void DisplayMatrix(int matrix[][B], int n);
void RandomMatrix(int matrix[][B], int n);
void CentralPermutation(int matrix[][B], int n);
void Swap(int &a, int &b);

int main()
{
	int matrix[A][B] = { { 0 } };
	int n;
	cout << "Enter n: ";
	cin >> n;
	RandomMatrix(matrix, n);
	DisplayMatrix(matrix, n);
	CentralPermutation(matrix, n);
	cout << endl;
	DisplayMatrix(matrix, n);
	system("pause");
	return 0;
}

void EnterMatrix(int a[][B], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "[" << (i + 1) << "][" << (j + 1) << "] = ";
			cin >> a[i][j];
		}
	}
}

void DisplayMatrix(int matrix[][B], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout.width(3);
			cout << matrix[i][j];
		}
		cout << endl;
	}
}

void RandomMatrix(int matrix[][B], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			matrix[i][j] = rand() % 10;
		}
	}
}

void CentralPermutation(int matrix[][B], int n)
{
	for (int i = 0; i < n / 2; i++)
	{
		for (int j = 0; j < n / 2; j++)
		{
			Swap(matrix[i][j], matrix[n - i - 1][n - j - 1]);
		}
	}
}

void Swap(int &a, int &b)
{
	int t = a;
	a = b;
	b = t;
}

