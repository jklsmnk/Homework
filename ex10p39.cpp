#include <iostream>

using namespace std;

const int  A = 50, B = 50;

void EnterMatrix(int matrix[][B], int n, int m);
void DisplayMatrix(int matrix[][B], int n, int m);
void RandomMatrix(int matrix[][B], int n, int m);
void TranspouseString(int matrix[][B], int n, int m);
void Swap(int &a, int &b);

int main()
{
	int matrix[A][B] = { { 0 } };
	int n, m;
	cout << "Enter n: ";
	cin >> n;
	cout << "Enter m: ";
	cin >> m;
	RandomMatrix(matrix, n, m);
	DisplayMatrix(matrix, n, m);
	TranspouseString(matrix, n, m);
	cout << endl;
	DisplayMatrix(matrix, n, m);
	system("pause");
	return 0;
}

void EnterMatrix(int a[][B], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << "[" << (i + 1) << "][" << (j + 1) << "] = ";
			cin >> a[i][j];
		}
	}
}

void DisplayMatrix(int matrix[][B], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout.width(3);
			cout << matrix[i][j];
		}
		cout << endl;
	}
}

void RandomMatrix(int matrix[][B], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			matrix[i][j] = rand() % 10;
		}
	}
}

void TranspouseString(int matrix[][B], int n, int m)
{
	for (int i = 0; i < n / 2; i++)
	{
		for (int j = 0; j < m ; j++)
		{
			Swap(matrix[i][j], matrix[n - i - 1][j]);
		}
	}
}

void Swap(int &a, int &b)
{
	int t = a;
	a = b;
	b = t;
}



