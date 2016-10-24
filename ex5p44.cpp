#include <iostream>
using namespace std;
int main()
{
	int n1 = 0;
	int n2 = 1;
	int r = 0;
	while (r / 10 <= 10)
	{
		r = n1 + n2;
		n1 = n2;
		n2 = r;
	}
	cout << r << endl;
	system("pause");
	return 0;
}