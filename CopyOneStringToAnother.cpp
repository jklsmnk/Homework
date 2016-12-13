#include <iostream>

using namespace std;

const int N = 15;

int main()
{
	char str[N] = { 0 };
	char str1[N] = { 0 };

	cout << "Enter a word: ";
	cin >> str; 

	for (int i = 0; str[i]; i++)
	{
		str1[i] = str[i];
	}
	cout << str1 << endl;
	char a;
	cin >> a;
	system("pause");
	return 0;
}