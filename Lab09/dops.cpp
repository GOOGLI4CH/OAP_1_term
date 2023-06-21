#include <iostream>
#include <locale>
#include <stdio.h>
#include <algorithm>
#include <clocale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	cout << "Задание 3" << endl;

	const int SIZE = 20; int k = 0;
	int arr[SIZE] = {};

	srand((unsigned)time(NULL));

	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 2;
		cout << i << "\t" << arr[i] << endl;
	}

	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] == arr[i + 1])
		{
			k++;
		}
	}

	cout << "Количество пар = " << k << endl;



	cout << "Задание 1" << endl;

	int n_weeks, days, counter = 0, z = 0, sum = 0;

	cout << "Введите количество недель ";
	cin >> n_weeks;

	days = n_weeks * 7;

	int arr_sum[100] = {};
	const int SIZE_D = 700;
	double amount[SIZE_D] = {};

	for (int i = 0; i < days; i++)
	{
		amount[i] = rand() % 250;
		sum += amount[i];
		counter++;

		if (counter % 7 == 0) {
			arr_sum[z] = sum;
			counter = 0;
			sum = 0;
			z++;
		}
	}
	for (int l = 0; l < n_weeks; l++)
	{
		cout << l + 1 << "\t" << "Сумма " << arr_sum[l] << endl;
	}

	int* max = max_element(begin(arr_sum), end(arr_sum));

	for (int x = 0; x < n_weeks; x++)
	{
		if (arr_sum[x] == *max)
			cout << "Максимальное кол-во осадков выпало на " << x + 1 << " неделе" << endl;
	}



	cout << "Задание 6" << endl;

	double d, f[12] = {};
	int n, a[99] = {};
	d = (1 + sqrt(5)) / 2;

	cout << "Введите размер массива (не более 99)" << endl;

	cin >> n;
	srand((unsigned)time(NULL));
	for (int i = 0; i < n; i++)

	{
		a[i] = rand() % 99;
		cout << i + 1 << ". " << a[i] << endl;
	}

	cout << endl;

	for (int j = 0; j <= 11; j++)
	{
		int c = (pow(d, j) - pow((-d), -j)) / (2 * d - 1);
		f[j] = c;
	}

	for (int i = 0; i < n; i++)
	{

		for (int j = 0; j <= 11; j++)
		{
			if (a[i] == f[j])
			{
				cout << "Номер числа Фибоначчи " << i + 1 << endl;
				cout << "Число Фибоначчи " << a[i] << endl;
			}
		}


		//Числа Фибоначчи: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765, 10946, 17711, 28657, 46368, 75025, 121393
	}
}