#include <iostream>

using namespace std;

int main()
{
	cout << "Enter 1 - task 2" << endl;
	cout << "Enter 2 - task 3" << endl;
	cout << "Enter 3 - task 4" << endl;
	cout << "Enter 0 - EXIT" << "\n" << endl;
	char choose;
	cin >> choose;
	if (choose == '0')
		return 0;
	double x, y, z;
	cout << "Enter a point (x,y)" << endl;
	cin >> x >> y;
	switch (choose) {
	case '1':
		if (((x < -0.4) && (x > 2)) && ((y < -0.5) && (y > 1)))
		{
			cout << "Don't belong" << endl;
			system("pause");
			return 0;
		}
		z = (x - 1)*(x - 1) + y*y;
		if ((z <= 1) && ((y - x) <= 0) && (y >= -0.5) || ((((x + 0.4)*(x + 0.4) + (y + 0.5)*(y + 0.5)) <= 1) && ((y - x) <= 0) && (y >= -0.5)))
			cout << "Belong" << endl;
		else
			cout << "Don't belong" << endl;
		system("pause");
		break;
	case '2':
		if (((x < -1) && (x > 1)) && ((y < -1) && (y > 1)))
		{
			cout << "Don't belong" << endl;
			system("pause");
			return 0;
		}
		z = x*x + y*y;
		if (((z <= 1) && (y >= 0) && (x >= 0)) || ((x >= -1) && (y >= -1) && (x <= 0) && (y <= 0)))
			cout << "Belong" << endl;
		else
			cout << "Don't belong" << endl;
		break;
	case '3':
		if (((x < -1) && (x > 1)) && ((y < -1) && (y > 1)))
		{
			cout << "Don't belong" << endl;
			system("pause");
			return 0;
		}
		z = x *x + y*y;
		if (((z <= 1) && (x >= 0)) || ((fabs(x) + fabs(y) <= 1) && (x <= 0)))
			cout << "Belong" << endl;
		else
			cout << "Don't belong" << endl;
		break;
	default:
		cout << "Input error" << endl;
		return 0;
	}
	system("pause");
	return 0;
}