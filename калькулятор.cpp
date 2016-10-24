#include <iostream>
using namespace std;
int main()
{
	double a, b;
	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;
	char op;
	cin >> op;
	double c;
	bool ok = true;
	switch (op)
	{
	case '*':
		c = a * b;
		break;
	case '-':
		c = a - b;
		break;
	case '+':
		c = a + b;
		break;
	case '/':
		if (b == 0)
			ok = false;
		else
			c = a / b;
			break;
	default:
		ok = false;
	}
	if (ok == true)
		cout <<  a <<  op <<  b << " = " << c << endl;
	else
	{
		cout << " Input error!" << endl;
		system("pause");
		return 0;
}
	system("pause");
	return 0;
} 