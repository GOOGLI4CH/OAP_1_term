#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	cout << "Задание 8" << endl;
	int n_1 = 6, n_2 = 5;
	float c = 0.7, a[] = { 3,12,-4,6.2,3,0.4 }, b[] = { 19,1,-24,4.2,8 }, d, sum_1 = 0, sum_2 = 0;
	for (int i = 1; i <= n_1; i++)
	{
		sum_1 += a[i-1];
	}
	for (int i = 1; i <= n_2; i++)
	{
		sum_2 += pow(b[i-1] - 1, 2);
	}
	d = sum_1 - c * sum_2;
	cout << "d = " << d << endl;

	cout << "Задание 12" << endl;
	int x[] = { 1,2,7,4,7,6, 10 }, y, sum = 0;
	int* z = max_element(begin(x), end(x));
	cout << "z(max) = " << *z << endl;

	for (int i = 1; i <= 5; i++)
	{
		sum += pow(x[i], 2);
	}
	y = *z * sum;
	cout << "y = " << y << endl;

	cout << "Задание 13" << endl;
	float y_1[] = { 3,-2,0.9,0.5,1 }, q, umn = 1;
	float* p = min_element(begin(y_1), end(y_1));
	cout << "p(min) = " << *p << endl;

	for (int i = 1; i <= 4; i++)
	{
		umn *= (y_1[i] - 5);
	}
	q = umn + *p;
	cout << "q = " << q << endl;
}