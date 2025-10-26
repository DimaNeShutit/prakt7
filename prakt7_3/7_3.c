#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "RUS");
	int n, days;
	puts("Введите количество месяцев:");
	scanf_s("%d", &n);
	puts("Введите количество дней:");
	scanf_s("%d", &days);
	days = days / 30;
	n = n + days;
	switch(n)
	{
	case 0:
		puts("Всё ещё январь");
		break;
	case 1:
		puts("февраль");
		break;
	case 2:
		puts("Март");
		break;
	case 3:
		puts("Апрель");
		break;
	case 4:
		puts("Май");
		break;
	case 5:
		puts("Июнь");
		break;
	case 6:
		puts("Июль");
		break;
	case 7:
		puts("Август");
		break;
	case 8:
		puts("Сентябрь");
		break;
	case 9:
		puts("Октябрь");
		break;
	case 10:
		puts("Ноябрь");
		break;
	case 11:
		puts("Декабрь");
		break;
	case 12:
		puts("Январь следующего года");
		break;
	default:
		puts("Ошибка");
	}
}