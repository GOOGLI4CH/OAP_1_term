#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <conio.h>

int main()
{
	//Задание 12 

	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	char c, space = ' ';
	cout << "Введите символ ";
	cin >> c;
	cout << setw(35) << setfill(space) << space;
	cout << setw(4) << setfill(c) << c << endl;
	cout << setw(35) << setfill(space) << space;
	cout << setw(4) << setfill(c) << c << endl;
	cout << setw(31) << setfill(space) << space;
	cout << setw(12) << setfill(c) << c << endl;
	cout << setw(31) << setfill(space) << space;
	cout << setw(12) << setfill(c) << c << endl;
	cout << setw(35) << setfill(space) << space;
	cout << setw(4) << setfill(c) << c << endl;
	cout << setw(35) << setfill(space) << space;
	cout << setw(4) << setfill(c) << c << endl;

	int n;
	double x, y, z;
	cout << "\nВведите число ";
	cin >> n;
	x = (n % 10);
	y = (n % 100) / 10;
	z = (n / 100);
	cout << "Результат ";
	cout << x;
	cout << y;
	cout << z;
}