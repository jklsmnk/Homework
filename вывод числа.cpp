#include <iostream> 
using namespace std;
int main()
{
	cout << "Numbers translator";
	cout << " Enter the nubmer" << endl;
	int k;
	cout << "k = ";
	cin >> k;
	if ((k < 1) || (k >= 100))
	{
		cout << "System error" << endl;
		system("pause");
		return 0;
	}
	if ((k >= 10) && (k < 20))
	{
		switch (k)
		{
		case 10:
			cout << "Ten ";
			break;
		case 11: cout << "Eleven ";
			break;
		case 12: cout << "Twenty ";
			break;
		case 13: cout << "Thirteen ";
			break;
		case 14: cout << "Fourteen ";
			break;
		case 15: cout << "Fifteen ";
			break;
		case 16: cout << "Sixteen ";
			break;
		case 17: cout << "Seventeen ";
			break;
		case 18: cout << "Eighteen ";
			break;
		case 19: cout << "Nineteen ";
			break;
		}
	}
	else
	{
		switch (k / 10)
		{
		case 2: cout << "Twenty";
			break;
		case 3: cout << "Thirty";
			break;
		case 4: cout << "Fourty";
			break;
		case 5: cout << "Fifty";
			break;
		case 6: cout << "Sixty";
			break;
		case 7: cout << "Seventy";
			break;
		case 8: cout << "Eighty";
			break;
		case 9: cout << "Ninety";
			break;
		}
		switch (k % 10)
		{
		case 1: cout << " one" << endl;
			break;
		case 2: cout << " two" << endl;
			break;
		case 3: cout << " three" << endl;
			break;
		case 4: cout << " four" << endl;
			break;
		case 5: cout << " five" << endl;
			break;
		case 6: cout << " six" << endl;
			break;
		case 7: cout << " seven" << endl;
			break;
		case 8: cout << " eight" << endl;
			break;
		case 9: cout << " nine" << endl;
			break;
		}
	}
	system("pause");
	return 0;

}