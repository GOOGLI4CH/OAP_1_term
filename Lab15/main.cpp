#include <iostream>
#include <iomanip>

using namespace std;

//int generate_matrix(int **matrix, int row, int element)		//Заполнение матрицы
//{
//	matrix = new int* [row];
//	for (int i = 0; i < row; i++)
//	{
//		matrix[i] = new int[element];
//
//		for (int j = 0; j < element; j++)
//		{
//			matrix[i][j] = rand() % 20;
//		}
//		cout << endl;
//	}
//
//	return **matrix;
//}

void min_and_replace(int** matrix, int row, int element)		//Функция, выполняющая поиск минимума по строкам и замену элементов на главной диагонали.
{
	int min_of_row;
	int counter = 0;
	int x = 0, y = 0;
	for (int i = 0; i < row; i++)
	{
		min_of_row = matrix[i][0];		//Перенос минимума на следующую строку

		for (int j = 0; j < element; j++)
		{
			if (matrix[i][j] < min_of_row)		//Поиск минимума
			{
				min_of_row = matrix[i][j];
			}
			counter++;
			if (counter == element)		//Замена на главной диагонали
			{
				matrix[x][y] = min_of_row;
				x++;
				y++;
			}
		}
		counter = 0;
	}
}
void output_matrix(int** matrix, int row, int element)		//Функция выполняющая вывод матрицы в консоль
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < element; j++)
		{
			cout << setw(4) << matrix[i][j];
		}
		cout << endl;
	}
}

void row_column(int** matrixA, int row, int element)	//Функция сравнение строк и столбцов
{
	int counter = 0;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < element; j++)
		{
			if (matrixA[i][j] == matrixA[j][i])
			{
				counter++;
			}
			if (counter == element)
			{
				cout << "К " << i + 1 << endl;		//i+1 для правильного вывода
			}
		}
		counter = 0;
	}
}

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	int key;

	cout << "Введите цифру (1 - задание 12.1, 2 - задание 12.2)" << endl;
	cin >> key;

	switch (key)
	{

	case 1:
		cout << "Задание 12.1" << endl;

		int** matrix;
		int row, element;

		cout << "Введите количество строк (<=16), затем столбцов (<=18)" << endl;
		cin >> row;
		cin >> element;


		if (row > 16 || element > 18)
		{
			cout << "Вы ввели значение не соответствующее условию!" << endl;
		}
		else
		{
			cout << "Матрица" << endl;

			matrix = new int* [row];
			for (int i = 0; i < row; i++)
			{
				matrix[i] = new int[element];

				for (int j = 0; j < element; j++)
				{
					matrix[i][j] = rand() % 20;
					cout << setw(4) << matrix[i][j];
				}
				cout << endl;
			}

			min_and_replace(matrix, row, element);	//Вызов функции

			cout << endl << "Изменённая матрица" << endl;

			output_matrix(matrix, row, element); //Вызов функции вывода в консоль

			delete[] matrix;
		}
		break;

	case 2:
		cout << "Задание 12.2" << endl;

		const int SIZE = 4;
		int** matrixA;

		cout << "Введите элементы матрицы 4x4" << endl;

		matrixA = new int* [SIZE];
		for (int i = 0; i < SIZE; i++)
		{
			matrixA[i] = new int[SIZE];
			for (int j = 0; j < SIZE; j++)
			{
				//cin >> matrixA[i][j];
				matrixA[i][j] = rand() % 2;
			}
		}

		cout << "Матрица" << endl;

		output_matrix(matrixA, SIZE, SIZE);

		//for (int i = 0; i < SIZE; i++)
		//{
		//	for (int j = 0; j < SIZE; j++)
		//	{
		//		cout << setw(4) << matrixA[i][j];
		//	}
		//	cout << endl;
		//}

		row_column(matrixA, SIZE, SIZE);		//Вызов функции сравнения строк и стобцов

		//int counter = 0;
		//for (int i = 0; i < SIZE; i++)
		//{
		//	for (int j = 0; j < SIZE; j++)
		//	{
		//		if (matrixA[i][j] == matrixA[j][i])
		//		{
		//			counter++;
		//		}
		//		if (counter == SIZE)
		//		{
		//			cout << "К " << i + 1 << endl;
		//		}
		//	}
		//	counter = 0;
		//}

		delete[] matrixA;
		break;
	}
}