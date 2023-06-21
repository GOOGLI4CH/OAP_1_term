#include <iostream>

using namespace std;

double function(double x)
{
	return pow(x, 3) - 1;
}

double function2(double x)
{
	return pow(x, 3) + x - 2;
}

double diff(double x)
{
	return 3 * pow(x, 2) + 1;
}

int main()
{
	setlocale(LC_ALL, "rus");

	cout << "\t\t\tЗадание 8" << endl;
	cout << "Метод трапеций" << endl;

	double a = 0, b = 3, x, s = 0, h, n = 200;

	x = a;

	for (int i = 0; i < n; i++)
	{
		h = (b - a) / n;
		s = s + h * (function(x) + function(x + h)) / 2;
		x = x + h;
	}
	if (x > (b - h))
	{
		cout << "\tИнтеграл (метод трапеций) = " << s << endl;
	}



	cout << "Метод параболл" << endl;

	double s1 = 0, s2 = 0, z;

	h = (b - a) / (2 * n);
	x = a + 2 * h;

	for (int i = 1; i < n; i++)
	{
		s2 += function(x);
		x += h;
		s1 += function(x);
		x += h;
	}

	z = h / 3 * (function(a) + 4 * function(a + h) + 4 * s1 + 2 * s2 + function(b));

	cout << "\tИнтеграл (метод параболл) = " << z << endl;



	cout << "Метод касательных" << endl;

	double e = 0.0001, x1 = 0;

	if (function2(a) * diff(a) > 0)
	{
		a = x;
	}
	else
	{
		b = x;
	}

	while (abs(x1 - x) > e)
	{
		x = x1;
		x1 = x - (function2(x) / diff(x));
	}

	if (abs(x1 - x) > e)
	{
		cout << "\tx (Метод касательных) = " << x << endl;
	}
	else
	{
		cout << "\tx (Метод касательных) = " << x << endl;
	}



	cout << "Метод дихотомии" << endl;

	while (abs(a - b) > 2 * e)
	{
		x = (a + b) / 2;

		if (function2(x) * function2(a) <= 0)
		{
			b = x;
		}
		else
		{
			a = x;
		}
	}

	cout << "\tx (Метод дихотомии) = " << x << endl;
}