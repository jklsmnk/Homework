#include <iostream>

using namespace std;

void EnterArray(int a[], int n);
void RandomArray(int a[], int n);
void DisplayArray(int a[], int n);
void ElementArray(int a[], int n, int b[], int &m);

const int N = 100;

int main()
{
	int a[N] = { 0 }, b[N] = { 0 };
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
	system("cls");
	RandomArray(a, n);
	DisplayArray(a, n);
	cout << endl;
	int m = 0;
	ElementArray(a, n, b, m);
	DisplayArray(b, m);
	cout << endl;
	system("pause");
	return 0;
}

	void RandomArray(int a[], int n)
	{
		for (int i = 0; i < n; i++)
		{
			a[i] = rand();
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

	void ElementArray(int a[], int n, int b[], int &m)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = i + 1; j < n; j++)  
			{
				for (int j = i + 1; j < n; j++)
				{
					if (a[i] == a[j]
						int k = 0;
			
					for (; k < m; k++)
						if (a[i] == b[k])
							break;
					if (k == m)
					{
						b[m] = a[i];
						m++;
					}
				}
			}
		}
	}
	