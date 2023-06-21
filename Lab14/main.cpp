#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	printf("Задание 12.1 (C)\n");

	int* A;
	int N, max, counter = 0;

	printf("Введите размер массива ");
	scanf_s("%d", &N);

	A = (int*)malloc(sizeof(int) * N);

	printf("Введите элементы массива\n");

	for (int i = 0; i < N; i++)
	{
		scanf_s("%d", &A[i]);
	}

	max = *A;

	for (int i = 0; i < N; i++)
	{
		if (*(A + i) > max)
		{
			max = *(A + i);
		}
	}

	printf("max = %d\n", max);

	for (int i = 0; i < N; i++)
	{
		if (*(A + i) == max)
		{
			counter++;
		}
	}

	printf("max встретился %d раза\n", counter);

	free(A);



	cout << "Задание 12.2 (C++)" << endl;
	srand(time(0));


	int row, element;
	int** matrix;

	cout << "Введите размер матрицы" << endl;
	cin >> row;
	cin >> element;

	matrix = new int* [row];

	for (int i = 0; i < row; i++)
	{
		matrix[i] = new int[element];

		for (int j = 0; j < element; j++)
		{
			matrix[i][j] = rand() % 20 - 10;
			cout << setw(4) << matrix[i][j];
		}
		cout << endl;
	}

	int flag = 0, buf = 0;

	for (int i = 0; i < row; i++)
	{	
		if (flag == 0)
		{
			for (int j = 0; j < element; j++)
			{
				if (matrix[i][j] > 0)
				{
					cout << "Номер первой строки с положительным элементом " << i + 1 << endl; //Корректное отображение номера строки (>0).
					buf = i;
					flag = 1;
					break;
				}
			}
		}
		else
		{
			break;
		}
	}

	int j = 0;
	int i = buf - 1;
	if (i < 0)			//Проверка на наличие предыдущей строки.
	{
		cout << "Нет предыдущей строки!";
	}
	else
	{
		cout << "Изменённая матрица" << endl;

		while (j < element)
		{
			matrix[i][j] = matrix[i][j] * (-1);
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