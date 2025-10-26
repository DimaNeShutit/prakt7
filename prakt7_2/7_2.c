#include <stdio.h>
#include <locale.h>
#include <math.h>
void main()
{
	float x, y;
	char c;
	setlocale(LC_ALL, "RUS");
	puts("Введите операцию в формате: 25,2*12,7, где:\n '*' - умножение\n '/' - деление\n '+' - сложение\n '-' - вычитание\n '^' - возведение в степень\n");
	scanf("%f%c%f",&x,&c,&y);
	switch (c)
	{
	case '+':
		printf("сумма равна %.2f", x + y);
		break;
	
	case '-':
		printf("разность равна %.2f", x - y);
		break;
	case '*':
		printf("произведение равно %.2f", x * y);
		break;
	case '/':
		printf("частное равно %.2f", x / y);
		break;
	case '^':
		printf("%.2f в степени %.2f равно %.2f", x, y, pow(x, y));
		break;
	default:
		printf("Ошибка.\nВыберите одну из представленных операций");
	}
}