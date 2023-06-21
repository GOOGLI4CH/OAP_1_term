#include <iostream>
#include <string>
int main()
{
	setlocale(LC_ALL, "rus");
	using namespace std;

	cout << "Задание 1" << endl;
	int a, i = 0, num, sum = 0, x, y = 0;
	for (a = 100000; a <= 999999; a++) {
		int b = a;
		while (i < 6) {
			num = a % 10;
			a /= 10;
			sum += num;
			i++;
		}
		a = b;
		if (sum % 7 == 0) {
			y++;
		}
		else {
			y = 0;
		}
		if (y == 2) {
			cout << a - 1 << endl << a << endl;
		}
		sum = 0;
		i = 0;
	}

	cout << "Задание 2" << endl;
	float p, q;
	int n = 1;
	cout << "Введите выручку за первый день ";
	cin >> p;
	cout << "Введите Q ";
	cin >> q;
	do
	{
		p = p + p * 0.03;
		n = n++;
	} while (p < q);
	cout << "Выручка фирмы составит: " << p << endl;
	cout << "На " << n << " день" << endl;

	cout << "Задание 6" << endl;
	string str;
	int k, b;
	cout << ("введите k = ");
	cin >> k;

	for (int f = 0; f < k; f++) {
		b = pow(2, f);
		str.append(to_string(b));
	}
	cout << str << endl << endl;
	cout << "k-й элемент в последовательности = " << str[k - 1];
	return 0;
}