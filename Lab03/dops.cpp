#include <iostream>
#include <iomanip>

void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	char space = ' ';

	//вариант 8

	char f;
	cout << "Вариант 8";
	cout << "\nВведите символ ";
	cin >> f;
	cout << setw(37) << setfill(space) << space;
	cout << setw(8) << setfill(f) << f << endl;
	cout << setw(36) << setfill(space) << space;
	cout << setw(10) << setfill(f) << f << endl;
	cout << setw(35) << setfill(space) << space;
	cout << setw(12) << setfill(f) << f << endl;
	cout << setw(35) << setfill(space) << space;
	cout << setw(12) << setfill(f) << f << endl;
	cout << setw(35) << setfill(space) << space;
	cout << setw(12) << setfill(f) << f << endl;
	cout << setw(35) << setfill(space) << space;
	cout << setw(12) << setfill(f) << f << endl;
	cout << setw(36) << setfill(space) << space;
	cout << setw(10) << setfill(f) << f << endl;
	cout << setw(37) << setfill(space) << space;
	cout << setw(8) << setfill(f) << f << endl;
	cout << setw(40) << setfill(space) << space;
	cout << setw(2) << setfill(f) << f << endl;
	cout << setw(37) << setfill(space) << space;
	cout << setw(8) << setfill(f) << f << endl;
	cout << setw(36) << setfill(space) << space;
	cout << setw(2) << setfill(f) << f;
	cout << setw(2) << setfill(space) << space;
	cout << setw(2) << setfill(f) << f;
	cout << setw(2) << setfill(space) << space;
	cout << setw(2) << setfill(f) << f << endl;
	cout << setw(36) << setfill(space) << space;
	cout << setw(2) << setfill(f) << f;
	cout << setw(2) << setfill(space) << space;
	cout << setw(2) << setfill(f) << f;
	cout << setw(2) << setfill(space) << space;
	cout << setw(2) << setfill(f) << f << endl;
	cout << setw(36) << setfill(space) << space;
	cout << setw(2) << setfill(f) << f;
	cout << setw(2) << setfill(space) << space;
	cout << setw(2) << setfill(f) << f;
	cout << setw(2) << setfill(space) << space;
	cout << setw(2) << setfill(f) << f << endl;
	cout << setw(36) << setfill(space) << space;
	cout << setw(2) << setfill(f) << f;
	cout << setw(2) << setfill(space) << space;
	cout << setw(2) << setfill(f) << f;
	cout << setw(2) << setfill(space) << space;
	cout << setw(2) << setfill(f) << f << endl;
	cout << setw(40) << setfill(space) << space;
	cout << setw(2) << setfill(f) << f << endl;
	cout << setw(40) << setfill(space) << space;
	cout << setw(2) << setfill(f) << f << endl;
	cout << setw(40) << setfill(space) << space;
	cout << setw(2) << setfill(f) << f << endl;
	cout << setw(39) << setfill(space) << space;
	cout << setw(4) << setfill(f) << f << endl;
	cout << setw(38) << setfill(space) << space;
	cout << setw(2) << setfill(f) << f;
	cout << setw(2) << setfill(space) << space;
	cout << setw(2) << setfill(f) << f << endl;
	cout << setw(38) << setfill(space) << space;
	cout << setw(2) << setfill(f) << f;
	cout << setw(2) << setfill(space) << space;
	cout << setw(2) << setfill(f) << f << endl;
	cout << setw(38) << setfill(space) << space;
	cout << setw(2) << setfill(f) << f;
	cout << setw(2) << setfill(space) << space;
	cout << setw(2) << setfill(f) << f << endl;
	cout << setw(38) << setfill(space) << space;
	cout << setw(2) << setfill(f) << f;
	cout << setw(2) << setfill(space) << space;
	cout << setw(2) << setfill(f) << f << endl;
	cout << setw(38) << setfill(space) << space;
	cout << setw(2) << setfill(f) << f;
	cout << setw(2) << setfill(space) << space;
	cout << setw(2) << setfill(f) << f << endl;

	double x, y, z, p, s;
	cout << "\nВведите сторону треугольника ";
	cin >> x;
	cout << "\nВведите сторону треугольника ";
	cin >> y;
	cout << "\nВведите сторону треугольника ";
	cin >> z;
	p = (x + y + z) / 2;
	s = sqrt(p * (p - x) * (p - y) * (p - z));
	cout << "\nПлощадь треугольника равна " << s;

	//вариант 11

	char c;
	cout << "\nВариант 11";
	cout << "\nВведите символ ";
	cin >> c;
	cout << setw(35) << setfill(space) << space;
	cout << setw(5) << setfill(c) << c << endl;
	cout << setw(35) << setfill(space) << space;
	cout << setw(5) << setfill(c) << c << endl;
	cout << setw(35) << setfill(space) << space;
	cout << setw(5) << setfill(c) << c << endl;

	double a, d, s_1;
	cout << "\nВведите диагональ квадрата ";
	cin >> d;
	a = d / sqrt(2);
	s_1 = pow(a, 2);
	cout << "\nПлощадь квадрата равна " << s_1;

	//вариант 13

	char n;
	cout << "\nВариант 13";
	cout << "\nВведите символ ";
	cin >> n;
	cout << setw(37) << setfill(space) << space;
	cout << setw(3) << setfill(n) << n;
	cout << setw(3) << setfill(space) << space;
	cout << setw(3) << setfill(n) << n << endl;
	cout << setw(36) << setfill(space) << space;
	cout << setw(5) << setfill(n) << n;
	cout << setw(1) << setfill(space) << space;
	cout << setw(5) << setfill(n) << n << endl;
	cout << setw(35) << setfill(space) << space;
	cout << setw(13) << setfill(n) << n << endl;
	cout << setw(35) << setfill(space) << space;
	cout << setw(13) << setfill(n) << n << endl;
	cout << setw(35) << setfill(space) << space;
	cout << setw(13) << setfill(n) << n << endl;
	cout << setw(36) << setfill(space) << space;
	cout << setw(11) << setfill(n) << n << endl;
	cout << setw(37) << setfill(space) << space;
	cout << setw(9) << setfill(n) << n << endl;
	cout << setw(38) << setfill(space) << space;
	cout << setw(7) << setfill(n) << n << endl;
	cout << setw(39) << setfill(space) << space;
	cout << setw(5) << setfill(n) << n << endl;
	cout << setw(40) << setfill(space) << space;
	cout << setw(3) << setfill(n) << n << endl;
	cout << setw(41) << setfill(space) << space;
	cout << setw(1) << setfill(n) << n << endl;

	double n_1;
	cout << "\nКоличество косилок = ";
	cin >> n_1;
	double m, t;
	cout << "\nКоличество часов работы первой косилки = ";
	cin >> m;
	t = (2 * m + (n_1 - 1) / 6) / 2 * n_1;
	cout << "\nВремя работы = " << t;
}