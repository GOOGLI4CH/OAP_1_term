#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	const int MAX_SIZE = 100;

	cout << "Доп.1" << endl;
	int s;
	int matrixB[MAX_SIZE][MAX_SIZE]= {};
	int newmatrix[MAX_SIZE][MAX_SIZE] = {};

	cout << "Введите N ";
	cin >> s;

	s = s * 2;

	for (int i = 0; i < s; i++)
	{
		for (int j = 0; j < s; j++)
		{
			matrixB[i][j] = rand() % 5;
			cout << setw(4) << matrixB[i][j];
		}
		cout << endl;
	}

	for (int i = 0; i < s / 2; i++)
	{
		for (int j = 0; j < s / 2; j++)
		{
			newmatrix[(s / 2) + i][(s / 2) + j] = matrixB[i][j];
		}
	}

	//cout << endl << endl;

	//for (int i = 0; i < s; i++)
	//{
	//	for (int j = 0; j < s; j++)
	//	{
	//		cout << newmatrix[i][j] << " ";
	//	}
	//	cout << endl;
	//}

	for (int i = 0; i < s / 2; i++)
	{
		for (int j = 0; j < s / 2; j++)
		{
			newmatrix[i][j] = matrixB[(s / 2) + i][(s / 2) + j];
		}
	}

	//cout << endl << endl;

	//for (int i = 0; i < s; i++)
	//{
	//	for (int j = 0; j < s; j++)
	//	{
	//		cout << newmatrix[i][j] << " ";
	//	}
	//	cout << endl;
	//}

	for (int i = 0; i < s / 2; i++)
	{
		for (int j = 0; j < s / 2; j++)
		{
			newmatrix[i][(s / 2) + j] = matrixB[(s / 2) + i][j];
		}
	}

	//cout << endl << endl;

	//for (int i = 0; i < s; i++)
	//{
	//	for (int j = 0; j < s; j++)
	//	{
	//		cout << newmatrix[i][j] << " ";
	//	}
	//	cout << endl;
	//}

	for (int i = 0; i < s / 2; i++)
	{
		for (int j = 0; j < s / 2; j++)
		{
			newmatrix[(s / 2) + i][j] = matrixB[i][(s / 2) + j];
		}
	}

	cout << endl << endl;

	for (int i = 0; i < s; i++)
	{
		for (int j = 0; j < s; j++)
		{
			cout << setw(4) << newmatrix[i][j];
		}
		cout << endl;
	}


	cout << "Доп.2" << endl;

	int matrix[MAX_SIZE][MAX_SIZE] = {}, N;

	cout << "Введите N ";
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			for (int n = 1; n <= N; n++)
			{
				matrix[i][j] = (i + j) % n + 1;
			}
			cout << setw(4) << matrix[i][j];
		}
		cout << endl;
	}



	cout << "Доп.3" << endl;

	int matrixA[MAX_SIZE][MAX_SIZE] = {}, size, array_1[100] = {}, array_2[100] = {}, counter = 0, counter2 = 0, buf;

	cout << "Введите порядок матрицы ";
	cin >> size;

	for (int i = 0; i < size; i++)			//Рандомное заполнение двумерного массива и запись его в одномерный массив.
	{
		for (int j = 0; j < size; j++)
		{
			matrixA[i][j] = rand() % 10;
			cout << setw(4) << matrixA[i][j];
			array_1[counter] = matrixA[i][j];
			counter++;
		}
		cout << endl;
	}

	for (int i = 0; i < counter; i++)		//Упорядочивание одномерного массива от большего к меньшему.
	{
		for (int j = i + 1; j < counter; j++)
		{
			if (array_1[i] < array_1[j])
			{
				buf = array_1[i];
				array_1[i] = array_1[j];
				array_1[j] = buf;
			}
		}
	}

	//cout << endl;
	//for (int i = 0; i < counter2; i++)		//Вывод упорядоченого массива без повторяющихся элементов.
	//{
	//	cout << array_2[i] << " ";
	//}

	for (int i = 0; i < counter; i++)		//Запись одномерного массива без повторяющихся элементрв.
	{
		if (array_1[i] != array_1[i + 1])
		{
			array_2[counter2] = array_1[i];
			counter2++;
		}
	}

	counter = 0;				//Обнуление счётчика.
	int tmp = 0, j = 0, i = 0;

	while (tmp < size)		//Изменение главной диагонали.
	{
		matrixA[i][j] = array_2[counter];
		counter++;
		j++;
		i++;
		tmp++;
	}

	cout << endl;

	for (int i = 0; i < size; i++)			//Вывод двумерного итогового массива.
	{
		for (int j = 0; j < size; j++)
		{
			cout << setw(4) << matrixA[i][j];
		}
		cout << endl;
	}
}