#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	const int MAX_SIZE = 256;

	cout << "Задание 12 (индекс)" << endl;

	char str[MAX_SIZE] = {}, newStr[MAX_SIZE] = {};

	puts("Введите строку");
	gets_s(str);

	for (int i = 0; i < strlen(str); i += 2)
	{
		newStr[i] = str[i + 1];
		newStr[i + 1] = str[i];
		cout << newStr[i] << newStr[i + 1];
	}

	cout << endl;
	//puts(newStr);


	cout << "Задание 12 (указатель)" << endl;

	char str[MAX_SIZE] = {}, newStr[MAX_SIZE] = {};

	puts("Введите строку");
	gets_s(str);

	char* pointer_str = str;
	char* pointer_new_str = newStr;

	for (int i = 0; i < strlen(str); i += 2)
	{
		*(pointer_new_str + i) = *(pointer_str + (i + 1));
		*(pointer_new_str + (i + 1)) = *(pointer_str + i);
		cout << *(pointer_new_str + i) << *(pointer_new_str + (i + 1));
	}

	cout << endl;
	//puts(newStr);



	cout << "Задание 15 (индекс)" << endl;

	char str_15[MAX_SIZE] = {}, newStr_15[MAX_SIZE] = {}, k;
	int counter = 0;

	puts("Введите строку");
	gets_s(str_15);
	puts("Введите символ");
	cin >> k;

	for (int i = 0; i < strlen(str_15); i++)
	{
		if (str_15[i] != k)
		{
			newStr_15[counter] = str_15[i];
			counter++;
		}
	}

	//puts(newStr_15);

	cout << "Задание 15 (указатель)" << endl;

	char str_15[MAX_SIZE] = {}, newStr_15[MAX_SIZE] = {}, k;
	int counter = 0;

	puts("Введите строку");
	gets_s(str_15);
	puts("Введите символ");
	cin >> k;

	char* pointer_str_15 = str_15;
	char* pointer_new = newStr_15;

	for (int i = 0; i < strlen(str_15); i++)
	{
		if (*(pointer_str_15 + i) != k)
		{
			*(pointer_new+counter) = *(pointer_str_15 + i);
			counter++;
		}
	}

	puts(newStr_15);
}
