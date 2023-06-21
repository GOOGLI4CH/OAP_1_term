#include <iostream>

int main()
{
	using namespace std;
	setlocale(LC_ALL, "rus");

	cout << "for" << endl;
	double y, z, b = 0.5, m = 8, a = 2.4 * pow(10, -4), j[3] = { -1.7,-2.9,-8 };
	for (int n = 0; n <= 2; n++)
	{
		y = (m - b) / (sin(a) - exp(a));
		z = 3 * y + sqrt(a - 4 * j[n] * b);
		cout << "y = " << y << endl;
		cout << "z = " << z << endl;
	}

	cout << "while" << endl;
	double j_1 = -2;
	while (j_1 > -3)
	{
		j_1 = j_1 - 0.5;
		y = (m - b) / (sin(a) - exp(a));
		z = 3 * y + sqrt(a - 4 * j_1 * b);
		cout << "y = " << y << endl;
		cout << "z = " << z << endl;
	}

	cout << "while & for" << endl;
	double b_1 = -2, m_1[3] = { -0.4,-1,-1.9 }, j_2 = 8;
	while (b_1 > -3)
	{
		b_1 = b_1 - 0.5;
		for (int i = 0; i <= 2; i++)
		{
			y = (m_1[i] - b_1) / (sin(a) - exp(a));
			z = 3 * y + sqrt(a - 4 * j_2 * b_1);
			cout << "y = " << y << endl;
			cout << "z = " << z << endl;
		}
	}
} 