#include <iostream>
#include <bitset>

using namespace std;

int main() {

	setlocale(LC_ALL, "rus");

	cout << "Задание 1.1" << endl;

	int number, counter = 0;

	cout << "Введите число ";
	cin >> number;

	bitset<16> bits(number);

	cout << "\tЧисло в двоичном виде" << endl << bits << endl;

	for (int i = 2; i <= 12; i++)
	{
		if (bits[i] == 0)
		{
			counter++;
		}
	}

	cout << "Количество нулей = " << counter << endl;



	cout << "Задание 1.2" << endl;

	int numberA, numberB;

	cout << "Введите число A, затем B " << endl;
	cin >> numberA;
	cin >> numberB;

	bitset<16> bitsA(numberA);
	bitset<16> bitsB(numberB);

	cout << "\tДвоичный код числа A " << endl << bitsA << endl;
	cout << "\tДвоичный код числа B " << endl << bitsB << endl;

	int position, numberOfBits, positionQ;

	cout << "Введите позицию P для числа A ";
	cin >> position;
	cout << "Введите позицию Q для числа B ";
	cin >> positionQ;
	cout << "Введите количество битов N ";	//Количество битов должно быть одинаковым
	cin >> numberOfBits;

	position -= 2;
	positionQ -= 2;


	for (int i = 0; i < numberOfBits; i++)
	{
		bitsB[positionQ] = bitsA[position];		//Замена битов B на A
		bitsA[position] = ~bitsA[position];		//Инверсия битов A	

		position--;
		positionQ--;
	}

	cout << "A = " << bitsA << endl;

	cout << "B = " << bitsB << endl;
}