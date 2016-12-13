#include <iostream>

using namespace std;

const int N = 10;

int main()
{
	char str[N] = { 0 };
	char str1[N] = { 0 };

	cout << "Etner the number: ";
	cin >> str;

	int len = strlen(str);
	for (int j = 0; j < len; j++)

	{
		str1[j] = str[len - j - 1];
	}
	cout << "Invented number: ";
	cout << str1 << endl;
	int i = 0;
	for (int j = 0; j < len; j++)

	{
		if (str1[j] == str[j])
			i++;
	}

	if (i == len)
		cout << "Palindrome" << endl;
	else
	{
		cout << "Not palindrome" << endl;
	}

	system("pause");
	return 0;
}