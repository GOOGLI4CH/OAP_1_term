#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <iomanip>

using namespace std;
int& z1(int i, int n, int* ptr) {
	int sum = 0;
	printf("\nMassiv: \n");

	for (i = 0; i < n; i++) {
		printf("%d ", *(ptr + i));
	}

	for (i = 0; i < n; i++) {
		if (*(ptr + i) % 2 != 0)
			sum += *(ptr + i);
	}
	return sum;
}


void z2(int i, int j, int row, int element, int* matrix) {
	cout << endl << "Матрица: " << endl;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < element; j++)
		{
			cout << setw(4) << *(matrix + i * element + j);
		}
		cout << endl;
	}

	cout << endl;

	int flag = 0, buf = 0;
	for (i = 0; i < row; i++)
	{
		if (flag == 0)
		{
			for (j = 0; j < element; j++)
			{
				if (*(matrix + i * element + j) > 0)
				{
					cout << "Номер первой строки с положительным элементом " << i + 1 << endl;
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

	j = 0;
	i = buf - 1;
	if (i < 0)
	{
		cout << "Нет предыдущей строки!" << endl;
	}
	else
	{
		while (j < element)
		{
			*(matrix + i * element + j) = *(matrix + i * element + j) * (-1);
			j++;

		}

	}
}



int main(int sum)
{


	int* ptr, i, n;
	setlocale(0, "");
	srand(time(NULL));
	printf("1. Создать одномерный массив, содержащий 15 элементов, \n наполнить его случайными значениями в интервале от 1 до 200. \n Определить сумму всех нечетных элементов массива. \n\n\n");
	printf("Введите размер массива(он должен быть 15 по условию) \n");
	do {
		scanf_s("%d", &n);
		if (n != 15)
			printf("\nНужно ввести число 15 по условию задания\n");
	} while (n != 15);
	ptr = (int*)malloc(n * sizeof(int));

	for (i = 0; i < n; i++)
	{
		/*printf("Input element [%d]\n", i + 1);
		scanf_s("%d", ptr + i);*/
		*(ptr + i) = rand() % 200 + 1;
		/*if (*(ptr + i) > 200 || *(ptr + i) < 1) {
			cout <<"Нужно ввести числа от 1 до 200" << endl;
			printf("Input element [%d]\n", i + 1);
			scanf_s("%d", ptr + i);
		}*/

	}

	printf("\nСумма нечётных элементов= %d\n", z1(i, n, ptr));

	free(ptr);     //освобождение динамической памяти
	cout << endl;
	system("pause");


	printf("\n\n\n2. Проверить, есть ли в матрице хотя бы одна строка, \nсодержащая положительный элемент и найти ее номер. \nЗнаки элементов предыдущей строки изменить на противоположные. \n\n\n");


	int row, element, j;
	int* matrix;

	cout << "Введите количество строк " << endl;
	cin >> row;
	cout << "Введите количество столбцов " << endl;
	cin >> element;
	cout << endl << endl;
	matrix = new int[row * element];

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < element; j++)
		{
			*(matrix + i * element + j) = rand() % 11 - 8;
			//cout << setw(4) << *(matrix + i * element + j);
			//cout << "введите " << j + 1 << " элемент " << i + 1 << " строки" << endl;
			//cin >> *(matrix + i * element + j);
		}
		//cout << endl;
	}

	z2(i, j, row, element, matrix);

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < element; j++)
		{
			cout << setw(4) << *(matrix + i * element + j);
		}
		cout << endl;
	}

	delete[] matrix;
	cout << endl;
	system("pause");
}