#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");

	double a, b, r;
	cout << "Введите a: ";
	cin >> a;
	cout << "Введите b: ";
	cin >> b;

	if (a < 0)
	{
		r = sin(a * b) + cos(a);
		cout << r << "\n";
	}
	else
	{
		if (b <= 0)
		{
			if (b == 0)
			{
				cout << "Ошибка вычисления, b = 0\n";
			}
			else
			{
				r = cos(a * b) / b + sin(a);
				cout << r << "\n";
			}
		}
		else
		{
			if (sin(a * b) == 0)
			{
				cout << "Ошибка вычисления, sin(ab) = 0\n";
			}
			else
			{
				r = sin(a) / sin(a * b) + b * cos(a) + b * sin(a / 2);
				cout << r << "\n";
			}
		}
	}

	system("pause");
	return 0;
}
