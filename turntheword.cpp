#include <iostream>

using namespace std;

const int  N = 10;


int main()
{
	char str[N] = { 0 };
	char str1[N] = { 0 };

	cout << "Enter a word or a number: "; 
	cin >> str;

	int len = strlen(str); 
	for (int i = 0; i <len; i++)

	{
		str1[i] = str[len - i - 1];
	}
	cout << "Changeling: "; 
	cout << str1 << endl;

	system("pause");
	return 0;
}