#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");

	cout << "Задание 12.1" << endl;

	int number;

	cout << "Введите число ";
	cin >> number;

	cout << "\tДвоичный код " << endl << bitset<32>(number) << endl;

	bitset<32> bits(number);
	
	bits[3] = ~bits[3];
	bits[4] = ~bits[4];
	bits[5] = ~bits[5];
	bits[6] = ~bits[6];
	bits[7] = ~bits[7];

	cout << "\tИнверсия с 4 по 8 бит " << endl << bits << endl;



	cout << "Задание 12.2" << endl;

	int numberA, numberB;

	cout << "Введите число A, затем B " << endl;
	cin >> numberA;
	cin >> numberB;

	cout << "\tДвоичный код числа A " << endl << bitset<32>(numberA) << endl;
	cout << "\tДвоичный код числа B " << endl << bitset<32>(numberB) << endl;

	int position, numberOfBits, positionQ;

	cout << "Введите позицию P, затем количество битов N " << endl;
	cin >> position;
	cin >> numberOfBits;

	bitset<32> bitsA(numberA);
	bitset<32> bitsB(numberB);

	cout << "Введите позицию Q " << endl;
	cin >> positionQ;

	position -= 2;
	positionQ -= 2;


	for (int i = 0; i < numberOfBits; i++)
	{
		bitsB[positionQ] = bitsA[position];
		bitsA.set(position, 0);

		position--;
		positionQ--;
	}

	cout << "A = " << bitsA << endl;

	cout << "B = " << bitsB << endl;




	cout << "\tЗадание 13.1" << endl;

	int numA, numB;

	cout << "Введите число A, затем B " << endl;
	cin >> numA;
	cin >> numB;

	cout << "\tДвоичный код числа A " << endl << bitset<32>(numA) << endl;
	cout << "\tДвоичный код числа B " << endl << bitset<32>(numB) << endl;

	bitset<32> bitsNumA(numA);
	bitset<32> bitsNumB(numB);

	bitsNumB[4] = bitsNumA[4];
	bitsNumB[5] = bitsNumA[5];

	cout << "Замена двух битов (начиная с 5) числа B на биты A " << endl << bitsNumB << endl;




	cout << "\tЗадание 13.2" << endl;

	int positionP, numberOfBits_N;

	cout << "Введите позицию P, затем количество битов N " << endl;
	cin >> positionP;
	cin >> numberOfBits_N;

	positionP -= 2;

	for (int i = 0; i < numberOfBits_N; i++)
	{
		bitsNumA.set(positionP, 1);
		positionP--;
	}

	cout << "A = " << bitsNumA;
}