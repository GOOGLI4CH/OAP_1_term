#include <iostream>
int main()
{
	//Вариант12

	setlocale(LC_ALL, "rus");
	std::cout << "Задание 12";
	double t, u, k = 6, x = 0.095, r = 5 * pow(10, -7);
	t = tan(x) + r * (1 - log(x));
	u = t / (pow(x, 3) + 1) / (1 - exp(k - 4));
	std::cout << "\nt=" << t;
	std::cout << "\nu=" << u;

	//Вариант15

	std::cout << "\nЗадание 15";
	double y, r_1, a = 1.75, b = 4.5 * pow(10, -4);
	y = a * exp(-2 * b) - sqrt(1 + a);
	r_1 = log(1 + 20 * b) / (1 + a);
	std::cout << "\ny=" << y;
	std::cout << "\nr=" << r_1;
}