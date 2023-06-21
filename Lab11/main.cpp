#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "rus");

	cout << "Задание 12" << endl;

	const int MAX_SIZE = 100;
	int arrayA[MAX_SIZE] = {}, arrayB[MAX_SIZE] = {}, size;
	int* pointerA = arrayA;
	int* pointerB = arrayB;

	cout << "Введите размер массивов (не более 100) ";
	cin >> size;

	cout << "\tМассив A" << endl;

	for (int i = 0; i < size; i++)
	{
		*(pointerA + i) = rand() % 10;

		cout << *(pointerA + i) << " ";
	}

	cout << endl << "\tМассив B" << endl;

	for (int i = 0; i < size; i++)
	{
		*(pointerB + i) = rand() % 10;

		cout << *(pointerB + i) << " ";
	}

	int counter = 0, counter_2 = 0, counter_3 = 0;

	for (int i = 0; i < size; i++)
	{
		if (*(pointerA + i) == *(pointerB + i))
		{
			counter++;
		}

		if (*(pointerA + i) > *(pointerB + i))
		{
			counter_2++;
		}

		if (*(pointerA + i) < *(pointerB + i))
		{
			counter_3++;
		}
	}

	cout << endl << "A[k] = B[k] " << counter << endl;
	cout << "A[k] > B[k] " << counter_2 << endl;
	cout << "A[k] < B[k] " << counter_3 << endl;



	cout << "Задание 13" << endl;

	int arrayX[MAX_SIZE] = {}, n, counter_4 = 0, j, result = 0;
	int* pointerX = arrayX;

	cout << "Введите размер массива X ";
	cin >> n;

	cout << "\tМассив X" << endl;

	for (int i = 0; i < n; i++)
	{
		*(pointerX+i) = rand() % 10;

		cout << *(pointerX + i) << " ";
	}

	for (int i = 0; i < n; i++)
	{
		counter_4 = 0;

		for (j = 0; j < n; j++)
		{
			if (*(pointerX + i) == *(pointerX + j))
			{
				counter_4++;
			}
		}

		if (counter_4 == 1)
		{
			result++;
		}
	}

	cout << endl << "Количество различных элементов: " << result;
}