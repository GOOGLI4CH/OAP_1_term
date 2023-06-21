#include <iostream>

int main()
{
	setlocale(LC_ALL, "Rus");
	using namespace std;

	//Вариант 4

	printf("Вариант 4");
	float a_1, b_1, p, q, r_1, s_1;
	printf("\nВведите размеры участка");
	printf("\nШирина = ");
	scanf_s("%f", &a_1);
	printf("Длина = ");
	scanf_s("%f", &b_1);
	printf("Введите размеры первого дома");
	printf("\nШирина первого дома = ");
	scanf_s("%f", &p);
	printf("Длина первого дома = ");
	scanf_s("%f", &q);
	printf("Введите размеры второго дома");
	printf("\nШирина второго дома = ");
	scanf_s("%f", &r_1);
	printf("Длина второго дома = ");
	scanf_s("%f", &s_1);
	if (
		(a_1 * b_1) >= (p * q) + (r_1 * s_1) &&
		(a_1 >= p && a_1 >= r_1) &&
		(b_1 >= q && b_1 >= s_1)
		)
		printf("Можно разместить");
	else
		printf("Нельзя разместить");

	//Вариает 5

	printf("\nВариант 5");
	float r_2, p_1, q_1, r_3;
	printf("\nВведите радиус шара");
	printf("\nr = ");
	scanf_s("%f", &r_2);
	printf("Введите диагонали ромба");
	printf("\np = ");
	scanf_s("%f", &p_1);
	printf("q = ");
	scanf_s("%f", &q_1);
	r_3 = (p_1 * q_1) / (sqrt(pow(p_1 / 2, 2) + pow(q_1 / 2, 2)) * 4);
	if (
		(r_2 <= r_3)
		)
		printf("Может");
	else
		printf("Не может");

	//Вариант 6

	printf("\nВариант 6");
	float a, b, c, r, s, t;
	printf("\nВведите размеры коробки");
	printf("\na = ");
	scanf_s("%f", &a);
	printf("b = ");
	scanf_s("%f", &b);
	printf("c = ");
	scanf_s("%f", &c);
	printf("Введите размеры посылки");
	printf("\nr = ");
	scanf_s("%f", &r);
	printf("s = ");
	scanf_s("%f", &s);
	printf("t = ");
	scanf_s("%f", &t);
	if (a <= r && b <= s && c <= t)
		printf("Можно упаковать");
	else
		printf("Нельзя упаковать");
}