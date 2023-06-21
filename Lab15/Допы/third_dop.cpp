#include <ctime>
#include <iostream>
#include <cstring>
#include <cctype>
#include <string>

using namespace std;

void matrix(int, int, int*, int*);
void strin(int, int, string);

int main()
{

	setlocale(0, "");
	int n = 0;

	int* A, * B, row, colum, i, j, f = 0, number = 0, key;
	string word;

	cout << "Введите цифру (1 - задание 4.1, 2 - задание 4.2)" << endl;
	cin >> key;
	switch (key) {

	case 1:
		cout << "Введите порядок матрицы ";
		cin >> row;
		colum = row;
		A = new int[row * colum];
		B = new int[row * colum];
		for (i = 0; i < row; i++) {
			for (j = 0; j < colum; j++)
			{
				cout << "Введите " << j + 1 << " элемент " << i + 1 << "-й строки ";
				cin >> *(A + i * colum + j);
				*(B + i * colum + j) = *(A + i * colum + j);
			}
		}

		matrix(row, colum, A, B);
		break;

	case 2:
		cout << "Введите размер строки в словах, то есть количество слов ";
		cin >> n;
		cout << endl;

		for (i = 0; i < n; i++) {
			cin >> word;
			strin(n, i, word);
		}
		break;

	case 3:
		break;
	}
}

void matrix(int row, int colum, int* A, int* B) {
	int i, j;
	cout << endl << "Матрица:" << endl;
	for (i = 0; i < row; i++) {
		for (j = 0; j < colum; j++)
		{
			cout << *(A + i * colum + j) << " ";

		}
		cout << endl;
	}
	cout << endl << "Новая матрица:" << endl;
	for (i = 0; i < row; i++) {
		for (j = 0; j < colum; j++)
		{
			if (i == 0) {
				*(B + i * colum + j) = *(A + i * colum + j) - *(A + (row - 1) * colum + j);
				cout << *(B + i * colum + j) << " ";
			}
			if (i != 0) {
				*(B + i * colum + j) = *(A + i * colum + j) - *(A + (i - 1) * colum + j);
				cout << *(B + i * colum + j) << " ";
			}




		}
		cout << endl;
	}


	delete[] A;

	delete[] B;
}




int sum = 0;

void strin(int n, int i, string word)
{
	// Код, который выполняется при возникновении исключения типа в блоке try
	  // Сообщение об ошибке журнала в объекте исключения  e.what();
	try {
		unsigned long int number2 = stoull(word); //Отбрасывает все пробельные символы, пока не будет найден первый не пробельный символ, затем берет столько символов, сколько возможно для формирования допустимого представления целого числа и преобразует их в целочисленное значение.
		sum += number2;
	}
	catch (invalid_argument& e) { //Этот класс служит базовым классом для всех исключений, создаваемых для сообщения о недопустимом аргументе. Определяет тип объекта, который будет создаваться как исключение. Он сообщает об ошибках, возникающих из-за того, что значение аргумента не было принято.
		cout << "Нельзя преобразовать '" << word << "' в число " << e.what() << endl;
	}
	if (i == n - 1)
		cout << "Сумма чисел: " << sum << endl << endl;
}