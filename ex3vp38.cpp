#include <iostream>

using namespace std;

const int A = 100, B = 50;

void EnterMatrix(int matrix[][B], int n, int m);
void DisplayMatrix(int matrix[][B], int n, int m);
void RandomMatrix(int matrix[][B], int n, int m);
void Swap(int& a, int& b);
void Transpouse(int matrix[][B], int n);

int main()
{
	int matrix[A][B] = { { 0 } };
	int  n, m;
	cout << "Enter n: ";
	cin >> n;
	m = n;
	{
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
			{
				if (i == j || i == m - j - 1 || (i <= j && i >= m - j - 1))
					matrix[i][j] = 1;
				if (i == j || i == m - j - 1 || (i >= j && i <= m - j - 1))
					matrix[i][j] = 1;
			}
	}
	DisplayMatrix(matrix, n, m);
	system("pause");
	return 0;
}

void EnterMatrix(int matrix[][B], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << "[" << (i + 1) << "][" << (j + 1) << "] = ";
			cin >> matrix[i][j];
		}
	}
}

void DisplayMatrix(int matrix[][B], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{

			cout.width();
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
			matrix[i][j] = i + 1;
		}
	}
}

void Transpouse(int matrix[][M], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			Swap(matrix[i][j], matrix[j][i]);
		}
	}
}

void Swap(int& a, int& b)
{
	int t = a;
	a = b;
	b = t;
}