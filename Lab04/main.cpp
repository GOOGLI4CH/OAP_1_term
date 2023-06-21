#include <iostream>

int main()
{
	setlocale(LC_ALL, "Rus");
	using namespace std;

	//Задание 4

	float x, y, z, min, max;
	printf("Введите x "); scanf_s("%f", &x);
	printf("Введите y "); scanf_s("%f", &y);
	printf("Введите z "); scanf_s("%f", &z);
	if (((x + y + z) / 2) < (x * y * z))
		min = ((x + y + z) / 2);
	else
		min = (x * y * z);
	if ((x * y) > (y))
		max = x * y;
	else
		max = y;
	printf("min(x+y+z / 2, xyz) + max(xy, y) = %f", min + max);

	//Задание 5

	int n;
	float x_1, m;
	printf("\nВведите единицу измерения (1-km, 2=m, 3=cm, 4=mm) ");
	cin >> n;
	switch (n)
	{
	case 1:
		printf("Введите значение в километрах ");
		scanf_s("%f", &x_1);
		m = x_1 * 1000;
		printf("Значение в метрах = %f", m);
		break;
	case 2:
		printf("Введите значение в метрах ");
		scanf_s("%f", &x_1);
		m = x_1;
		printf("Значение в метрах = %f", m);
		break;
	case 3:
		printf("Введите значение в сантиметрах ");
		scanf_s("%f", &x_1);
		m = x_1 / 100;
		printf("Значение в сантиметрах = %f", m);
		break;
	case 4:
		printf("Введите значение в милиметрах ");
		scanf_s("%f", &x_1);
		m = x_1 / 1000;
		printf("Значение в милиметрах = %f", m);
		break;
	default:
		printf("Неверное значение");
		break;
	}

	//Задание 6

	int n_1;
	printf("\nВы хотите купить автомобиль? (1-ДА, 2-НЕТ) ");
	cin >> n_1;
	switch (n_1)
	{
	case 1:
		printf("Какой автомобиль вы хотите купить? (1-ауди, 2-бмв, 3-лада");
		cin >> n_1;
		switch (n_1)
		{
		case 1:
			printf("Не слабо");
			break;
		case 2:
			printf("Хороший выбор");
			break;
		case 3:
			printf("Сомнительный выбор");
			break;
		}
		break;
	case 2:
		printf("Ну ладно тогда");
		break;
	default:
		printf("Некорретный вариант");
		break;
	}

}