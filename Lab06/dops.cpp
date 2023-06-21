#include <iostream>

int main()
{
	setlocale(LC_ALL, "rus");
	using namespace std;

	cout << "Задание 3" << endl;
	float c_1, c_2;
	cout << "Кол-во воды в первом сосуде ";
	cin >> c_1;
	cout << "Кол-во воды во втором сосуде ";
	cin >> c_2;
	for (int n = 1; n <= 12; n++)
	{
		c_1 /= 2;
		c_2 += c_1;
		c_2 /= 2;
		c_1 += c_2;
	}
	cout << "В первом сосуде " << c_1 << " литров" << endl;
	cout << "Во втором сосуде " << c_2 << " литров" << endl;

	cout << "Задание 4" << endl;
	int a, b, c, d;
	for (int f = 1000; f <= 9999; f++)
	{
		a = f / 1000;
		b = f / 100 % 10;
		c = f / 10 % 10;
		d = f % 1000 % 10;

		if (a == d && a != b && b == c && f % 2 == 0 && f % 7 == 0 && f % 11 == 0 && a + b + c + d == 30)
		{
			cout << "Номер " << f << endl;
		}
	}

	cout << "Задание 6" << endl;
	int n;
	do {
		cout << "n = ";
		cin >> n;
	} while (n < 1);

	int buf = n;
	for (int i = 2; i <= buf;) {

		int flag = 1;
		for (int j = 2; j < i; ++j)
			if (i % j == 0 && i != j) {
				flag = 0;
				break;
			}

		if (flag == 1 && buf % i == 0) {
			cout << i << endl;
			buf /= i;
		}
		else
			++i;
	}
}