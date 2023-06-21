#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	printf("Задание 1.1 (C)\n");

	int* A;
	int N, counter = 0;

	printf("Введите размер массива ");
	scanf_s("%d", &N);

	A = (int*)malloc(sizeof(int) * N);

	printf("Введите элементы массива\n");

	for (int i = 0; i < N; i++)
	{
		scanf_s("%d", &A[i]);
	}

	for (int i = 0; i < N; i++)
	{
		if (*(A + i) < 0)
		{
			counter++;
		}
	}

	printf("Количество отрицательных элементов %d\n", counter);

	int minABS = abs(*A), buf = 0;

	for (int i = 0; i < N; i++)
	{
		if (abs(*(A + i)) < minABS)
		{
			minABS = abs(*(A + i));
			buf = i + 1;		//Убрать 1, если требуется не включать элемент с минимальным модулем.
		}
	}

	printf("Модуль минимального элемента %d\n", minABS);

	int sumABS = 0;

	for (int i = buf; i < N; i++)
	{
		sumABS += *(A + i);
	}

	printf("Сумма %d\n", sumABS);

	free(A);



	cout << "Задание 1.2 (C++)" << endl;

	int** matrix;
	int row, element;

	cout << "Введите количество строк, затем количество столбцов" << endl;
	cin >> row;
	cin >> element;

	matrix = new int* [row];

	for (int i = 0; i < row; i++)
	{
		matrix[i] = new int[element];
		
		for (int j = 0; j < element; j++)
		{
			matrix[i][j] = rand() % 10 - 2;
			cout << setw(4) << matrix[i][j];
		}
		cout << endl;
	}

	counter = 0, buf = 0;
	int flag = 0;

	for (int i = 0; i < element; i++)
	{
		for (int j = 0; j < row; j++)
		{
			if (matrix[j][i] >= 0)		//Если требуется исключить 0, то знак следует сделать строгим
			{
				counter++;

			}

			if (counter == row)
			{
				cout << "Номер первого столбца с положительными элементами " << i + 1 << endl;
				buf = i;
				flag++;
				break;
			}
		}

		counter = 0;

		if (flag == 1)
		{
			break;
		}
	}
	
	int column = buf - 1;		//Для замены элементов предыдущего столбца
	int j = 0;

	if (column < 0)
	{
		cout << "Нет предыдущего столбца" << endl;
	}
	else
	{
		cout << "Изменённая матрица" << endl;

		while (j < row)
		{
			matrix[j][column] = matrix[j][column] * (-1);
			j++;
		}

		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < element; j++)
			{
				cout << setw(4) << matrix[i][j];
			}
			cout << endl;
		}
	}

	delete[] matrix;
}