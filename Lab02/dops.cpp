#include <iostream>
int main()
{
	//вариант 1

	setlocale(LC_ALL, "rus");
	std::cout << "Вариант 1";
	double t, u, k = 4, x = 2 * pow(10, -4), a = 8.1;
	t = 2 * k / a + log(2 + x);
	u = sqrt(k - 1) / (t + 1);
	std::cout << "\nt=" << t;
	std::cout << "\nu=" << u;

	//вариант 4

	std::cout << "\nВариант 4";
	double p, q, t_1 = 6, y_1 = -1.2, x_1 = 0.4 * pow(10, 6);
	p = 2.6 * t_1 + cos(y_1 / (3 * x_1 + y_1));
	q = sin(t_1) / cos(t_1);
	std::cout << "\np=" << p;
	std::cout << "\nq=" << q;

	//вариант 2

	std::cout << "\nВариант 2";
	double z, y_2, n = 2, b = -0.12, x_2 = 1.3 * pow(10, -4);
	z = 1 / (x - 1) + sin(x) - sqrt(n);
	y_2 = (exp(-b) + 1) / 2 * z;
	std::cout << "\nz=" << z;
	std::cout << "\ny=" << y_2;

	//вариант 5

	std::cout << "\nВариант 5";
	double w, v, b_1 = 40, x_3 = 1.1, a_1 = 5 * pow(10, -6);
	w = (a_1 + b_1) * tan(x_3) / (x_3 + 1);
	v = 1 / 2 * b_1 - sqrt(w - a_1 * b_1);
	std::cout << "\nw=" << w;
	std::cout << "\nv=" << v;

	//вариант 3

	std::cout << "\nВариант 3";
	double d, f, i = -6, x_4 = 4.5, z_1 = 1.5 * pow(10, -6);
	d = tan(-x_4 * i) / sqrt(x - z);
	f = sin(2 * d) / d;
	std::cout << "\nd=" << d;
	std::cout << "\nf=" << f;

	//вариант 6

	std::cout << "\nВариант 6";
	double t_2, u_1, s, y_3 = 0.956, a_2 = 5 * pow(10, -6), n_1 = 4;
	t_2 = 1 / sqrt(y_3) + 14 * a;
	u_1 = (t_2 + 1) / (a_2 + 2);
	s = log((2 * n_1 / 3) + exp(-n) / u_1);
	std::cout << "\nt=" << t_2;
	std::cout << "\nu=" << u_1;
	std::cout << "\ns=" << s;
}