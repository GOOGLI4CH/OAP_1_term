#include <iostream>
#include <iomanip>
#include <ctime>
#include <string>

using namespace std;

int comparasion_null(int** matrix, int row, int element, int counter_null)		//Функция подсчёта нулевых элементов
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < element; j++)
		{
			if (matrix[i][j] == 0)
			{
				counter_null++;
			}
		}
	}
	return counter_null;
}

int comparasion_plus(int** matrix, int row, int element, int counter_plus)		//Функция подсчёта элементов >0
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < element; j++)
		{
			if (matrix[i][j] > 0)
			{
				counter_plus++;
			}
		}
	}
	return counter_plus;
}

int comparasion_minus(int** matrix, int row, int element, int counter_minus)		//Функция подсчёта элементов <0
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < element; j++)
		{
			if (matrix[i][j] < 0)
			{
				counter_minus++;
			}
		}
	}
	return counter_minus;
}
int count(string strA, int counter)		//Подсчёт слов
{
	for (int i = 0; i < strA.length(); i++)
	{
		if (strA[i] == ' ')
		{
			counter++;
		}
	}
	return counter;
}

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	int key;

	cout << "Введите цифру (1 - задание 8.1, 2 - задание 8.2)" << endl;
	cin >> key;

	switch (key)
	{
	case 1:
	{
		cout << "Задание 8.1" << endl;

		int row, element;
		int** matrix;

		cout << "Введите количество строк, затем столбцов " << endl;
		cin >> row;
		cin >> element;

		cout << "Матрица" << endl;
		matrix = new int* [row];
		for (int i = 0; i < row; i++)
		{
			matrix[i] = new int[element];
			for (int j = 0; j < element; j++)
			{
				matrix[i][j] = rand() % 10 - 5;
				cout << setw(4) << matrix[i][j];
			}
			cout << endl;
		}

		int counter_null = 0, counter_plus = 0, counter_minus = 0;

		cout << "Количество элементов = 0 " << comparasion_null(matrix, row, element, counter_null) << endl;
		cout << "Количество элементов > 0 " << comparasion_plus(matrix, row, element, counter_plus) << endl;
		cout << "Количество элементов < 0 " << comparasion_minus(matrix, row, element, counter_minus) << endl;

		delete[] matrix;
		break;
	}
	case 2:
	{
		cout << "Задание 8.2" << endl;

		string strA;
		int counter = 0;

		puts("Введите предложение: ");

		bool state = ios::sync_with_stdio(false);
		cin.ignore(cin.rdbuf()->in_avail());
		getline(cin, strA);
		ios::sync_with_stdio(state);

		cout << "Количество слов " << count(strA, counter) + 1;
		break;
	}
	}
}