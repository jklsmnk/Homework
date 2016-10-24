#include <iostream>
using namespace std;

int main()
{
	cout << "enter number" << endl;
	long long n;
	cin >> n;
	int i;
	int p;
	int o;
	int zer = 0, on = 0, tw = 0, thre = 0, fou = 0, fiv = 0, si = 0, seve = 0, eigh = 0, nin = 0;
	while (n  > 0)
	{
		o = n % 10;
		switch (o)
		{
		case 0:
		{
			zer = zer + 1;
		}
		break;
		case 1:
		{
			on = on + 1;
		}
		break;
		case 2:
		{
			tw = tw + 1;
		}
		break;
		case 3:
		{
			thre = thre + 1;
		}
		break;
		case 4:
		{
			fou = fou + 1;
		}
		break;
		case 5:
		{
			fiv = fiv + 1;
		}
		break;
		case 6:
		{
			si = si + 1;
		}
		break;
		case 7:
		{
			seve = seve + 1;
		}
		break;
		case 8:
		{
			eigh = eigh + 1;
		}
		break;
		case 9:
		{
			nin = nin + 1;
		}
		break;
		}
		n = n / 10;
	}
	cout << "zero= " << zer << endl;
	cout << "one= " << on << endl;
	cout << "two= " << tw << endl;
	cout << "three= " << thre << endl;
	cout << "four= " << fou << endl;
	cout << "five= " << fiv << endl;
	cout << "six= " << si << endl;
	cout << "seven= " << seve << endl;
	cout << "eight= " << eigh << endl;
	cout << "nine= " << nin << endl;
	if (zer > 0)
		cout << "minimun element is zero" << endl;
	else
	{
		if (on > 0)
			cout << "minimun element is one" << endl;
		else
		{
			if (tw > 0)
				cout << "minimun element is two" << endl;
			else
			{
				if (thre > 0)
					cout << "minimun element is three" << endl;
				else
				{
					if (fou > 0)
						cout << "minimun element is four" << endl;
					else
					{
						if (fiv > 0)
							cout << "minimun element is five" << endl;
						else
						{
							if (si > 0)
								cout << "minimun element is six" << endl;
							else
							{
								if (seve > 0)
									cout << "minimun element is seven" << endl;
								else
								{
									if (eigh > 0)
										cout << "minimun element is eight" << endl;
									else
									{
										if (nin > 0)
											cout << "minimun element is nine" << endl;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	if (nin > 0)
		cout << "maximim element is nine" << endl;
	else
	{
		if (eigh > 0)
			cout << "maximim element is eight" << endl;
		else
		{
			if (seve > 0)
				cout << "maximim element is seven" << endl;
			else
			{
				if (si > 0)
					cout << "maximim element is six" << endl;
				else
				{
					if (fiv > 0)
						cout << "maximim element is five" << endl;
					else
					{
						if (fou > 0)
							cout << "maximim element is four" << endl;
						else
						{
							if (thre > 0)
								cout << "maximim element is three" << endl;
							else
							{
								if (tw > 0)
									cout << "maximim element is two" << endl;
								else
								{
									if (on > 0)
										cout << "maximim element is one" << endl;
									else
									{
										if (zer > 0)
											cout << "maximim element is zero" << endl;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	system("pause");
	return 0;
}