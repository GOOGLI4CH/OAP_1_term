#include <iostream>
#include <iomanip>

using namespace std;

int& counter_minus(int* arr, int size)
{
	int counter = 0;

	for (int i = 0; i < size; i++)
	{
		if (i % 2 != 0 && *(arr + i) < 0)
		{
			counter++;
		}
	}

	return counter;
}

int& check_matrix(int** matrix, int row, int element)			/*Функция осуществляет поиск строки с отрицательным элементом
																Для поиска всех строк с отрицательным элементом убрать конструкцию с flag*/
{
	int buf = -1, flag = 0;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < element; j++)
		{
			if (*(*(matrix + i) + j) < 0)
			{
				buf = i;
				flag++;
				break;
			}
		}
		if (flag)
		{
			break;
		}
	}

	return buf;
}

void column(int** matrix, int row, int element, int result)			//Функция уменьшения значения элементов столбца в два раза, который имеет номер строки с отрицательным эдементом
{
	int counter = 0;

	while (counter < row)
	{
		*(*(matrix + counter) + result) = *(*(matrix + counter) + result) / 2;	//При деление округляется в меньшую сторону (устранить = сменить тип данных)
		counter++;
	}
}

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	cout << "Задание 12.1" << endl;

	int size;

	cout << "Введите размер массива " << endl;
	cin >> size;

	int* arr = new int[size];

	for (int i = 0; i < size; i++)
	{
		*(arr + i) = rand() % 20 - 10;
		cout << *(arr + i) << " ";
	}
	int num_minus = counter_minus(arr, size);
	cout << endl << "Кол-во отрицательных элементов стоящих на чётных местах " << num_minus << endl;


	cout << "Задание 12.2" << endl;

	int row, element;

	cout << "Введите количество строк, затем столбцов" << endl;
	cin >> row >> element;

	int** matrix = new int* [row];
	for (int i = 0; i < row; i++)
	{
		*(matrix + i) = new int[element];
		for (int j = 0; j < element; j++)
		{
			*(*(matrix + i) + j) = rand() % 20 - 10;
			cout << setw(4) << *(*(matrix + i) + j);
		}
		cout << endl;
	}

	int result = check_matrix(matrix, row, element);

	if (result < 0)
	{
		cout << "Нет такой строки" << endl;
	}
	else
	{
		cout << "Номер первой строки, которая содержит отрицательный элемент " << result + 1 << endl;
		cout << "Изменённая матрица" << endl;

		column(matrix, row, element, result);

		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < element; j++)
			{
				cout << setw(4) << *(*(matrix + i) + j);
			}
			cout << endl;
		}
	}
}