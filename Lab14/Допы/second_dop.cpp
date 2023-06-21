#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	printf("Задание 9.1 (C)\n");

	int* A;
	int N;

	printf("Введите размер массива ");
	scanf_s("%d", &N);

	A = (int*)malloc(sizeof(int) * N);

	printf("Введите элементы массива\n");

	for (int i = 0; i < N; i++)
	{
		scanf_s("%d", &A[i]);
	}

	int mul = 1;

	for (int i = 0; i < N; i++)
	{
		if (*(A + i) > 0)
		{
			mul *= *(A + i);
		}
	}

	printf("Произведение положительных значений %d\n", mul);

	int min = *A, buf = 0;

	for (int i = 0; i < N; i++)
	{
		if (*(A + i) < min)
		{
			min = *(A + i);
			buf = i;
		}
	}

	printf("Минимум %d\n", min);

	int sum = 0;

	for (int i = 0; i < buf; i++)
	{
		sum += *(A + i);
	}

	printf("Сумма элементов до минимума %d\n", sum);

	free(A);

	

	cout << "Задание 9.2" << endl;

	int** matrix= {};
	int row, element;

	cout << "Введите количество строк, затем столбцов " << endl;
	cin >> row;			//3	для проверки
	cin >> element;		//4

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

	int flag = 0, counter = 0, buf1 = 0, sum1 = 0;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < element; j++)
		{
			if (matrix[i][j] >= 0)		//следует поставить строгий знак, если требуется исключить 0
			{
				counter++;
			}

			if (counter == element)
			{
				cout << "Номер первой строки с положительными элементами " << i + 1 << endl;
				buf1 = i;
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

	for (int j = 0; j < element; j++)
	{
		sum1 += matrix[buf1][j];
	}

	cout << "Сумма элементов первой положительной строки " << sum1 << endl;
	cout << "Матрица с уменьшеными элементами на sum" << endl;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < element; j++)
		{
			matrix[i][j] -= sum1;
			cout << setw(4) << matrix[i][j];
		}
		cout << endl;
	}

	delete[] matrix;
}