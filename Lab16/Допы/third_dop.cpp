#include <iostream>
#include <iomanip>

using namespace std;

int* find_max(int* arr, int size)
{
	int* max = arr;
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) > *max)
		{
			*max = *(arr + i);
		}
	}

	return max;
}
int* find_min(int* arr, int size)
{
	int* min = arr;
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) < *min)
		{
			*min = *(arr + i);
		}
	}
	return min;
}
int check_null(int** matrix, int row, int element)
{
	int counter_row = 0;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < element; j++)
		{
			if (*(*(matrix + i) + j) == 0)
			{
				counter_row++;
				break;
			}
		}
	}
	if (counter_row == row)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void replace(int** matrix, int row, int element)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < element; j++)
		{
			if (*(*(matrix + i) + j) < 0)
			{
				*(*(matrix + i) + j) = 0;
			}
		}
	}
}

int main()
{
	setlocale(LC_ALL, "rus");

	cout << "Задание 6.1" << endl;


	cout << "Введите размер массива " << endl;

	int size;
	cin >> size;
	int* arr = new int[size];

	for (int i = 0; i < size; i++)
	{
		*(arr + i) = rand() % 20 - 7;
		cout << *(arr + i) << " ";
	}

	int max = *find_max(arr, size),
		min = *find_min(arr, size),
		sum = max + min;
	cout << endl << "Максимум " << max << endl;
	cout << "Минимум " << min << endl;
	cout << "Сумма " << sum << endl;


	cout << "Задание 6.2" << endl;

	cout << "Введите количество строк, затем столбцов" << endl;

	int row, element;
	cin >> row >> element;

	int** matrix = new int* [row];
	for (int i = 0; i < size; i++)
	{
		*(matrix + i) = new int[element];
		for (int j = 0; j < element; j++)
		{
			*(*(matrix + i) + j) = rand() % 5 - 2;
			cout << setw(4) << *(*(matrix + i) + j);
		}
		cout << endl;
	}

	if (check_null(matrix, row, element) == 1)
	{
		replace(matrix, row, element);

		cout << "Изменённая матрица" << endl;

		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < element; j++)
			{
				cout << setw(4) << *(*(matrix + i) + j);
			}
			cout << endl;
		}
	}
	else
	{
		cout << "Не все строки содержат 0" << endl;
	}
}