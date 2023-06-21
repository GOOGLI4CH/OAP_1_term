#include <iostream>

int main()
{
	setlocale(LC_ALL, "rus");
	using namespace std;

	cout << "Задание 1" << endl;
	double f = -125 * pow(10, -6), n = 1.7, t = 1, c, d;
	while (t <= 2)
	{
		t = t + 0.1;
		c = 2 * sin(f / 2) + log(t);
		cout << "c = " << c << endl;
		if (c >= 3)
		{
			d = n * exp(-2 * t) + f;
			cout << "d = " << d << endl;
		}
		else if (c < 3)
		{
			d = n - pow(n, 3);
			cout << "d = " << d << endl;
		}
	}

	cout << "Задание 2" << endl;
	int x, y, z, nod = 0;
	cout << "Введите x ";
	cin >> x;
	cout << "Введите y ";
	cin >> y;
	cout << "Введите z ";
	cin >> z;
	while (x > 0 && y > 0)
	{
		if (x > y)
		{
			x = x % y;
		}
		else
		{
			y = y % x;
		}
	}

	nod = x + y;

	while (nod > 0 && z > 0)
	{
		if (z > nod)
		{
			z = z % nod;
		}
		else
		{
			nod = nod % z;
		}
	}
	cout << "НОД = " << nod + z;
}