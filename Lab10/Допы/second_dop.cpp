#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	cout << "Задание 2.1" << endl;

	int numberA, numberB; //255 и 1 (лучшие числа для наглядности)

	cout << "Введите A, затем B " << endl;
	cin >> numberA;
	cin >> numberB;

	bitset<16> bitsA(numberA);
	bitset<16> bitsB(numberB);

	cout << "\tДвоичный вид A" << endl << bitsA << endl;
	cout << "\tДвоичный вид B" << endl << bitsB << endl;

	bitsB[2] = bitsA[1];
	bitsB[3] = bitsA[2];
	bitsB[4] = bitsA[3];
	bitsB[5] = bitsA[4];
	bitsB[6] = bitsA[5];

	cout << "B = " << bitsB << endl;


	cout << "Задание 2.2" << endl;

	int position, numberOfBits;

	cout << "Введите позицию P, затем количество битов N " << endl;
	cin >> position;
	cin >> numberOfBits;

	position -= 2;

	for (int i = 0; i < numberOfBits; i++)
	{
		bitsA.set(position, 1);

		position--;
	}

	cout << "A = " << bitsA << endl;
}