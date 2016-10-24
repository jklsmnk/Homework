#include <iostream> 
using namespace std;
int main()
{
	cout << " The value of the field 1 " << endl;
	cout << " The value of the field 2 " << endl;
	cout << " The value of the field 3 " << endl;
	int op;
	cin >> op;
	double x, y;
	cout << "x" << endl;
	cin >> x ;
	cout << "y" << endl;
	cin >> y ;
	bool condition;
	switch (op)
	{
	case 1:
		condition = (((x - 1)*(x - 1) + y*y) <= 1 && y >= -0.5 && y <= x);
		break;
	case 2:
		condition = (y >= 0 && x >= 0 && (x*x + y*y) <= 1) || (x >= -1 && x <= 0 && y >= -1 && y <= 0);
		break;
	case 3:
		condition = (y <= (x + 1) && (y >= (-x - 1) && (x*x + y*y <= 1)));
		break;
	default:
		cout << "Input error!" << endl;
		system("pause");
		return 0;
	}
	if (condition)
		cout << " Belong" << endl;
	system("pause");
	return 0;
}