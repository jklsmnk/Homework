#include <iostream>

using namespace std;

bool polindrome(int);

int main()
{
		int n;
	cout << "Enter n = ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		if (polindrome(i))
			cout << i << " ";
	}
}
	system("pause");
	return 0;

}
bool polindrome(int i)
{
	long long m = abs(i), w = 0;
	while (m)
	{
		short o = m % 10;
		w = w * 10 + o;
		m = m / 10;
	}
	if (w == abs(i))
		return true;
	else
		return false;
}