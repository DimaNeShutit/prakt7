#include <stdio.h>
#include <locale.h>
#include <math.h>
void main()
{
	float x, y;
	char c;
	setlocale(LC_ALL, "RUS");
	puts("������� �������� � �������: 25,2*12,7, ���:\n '*' - ���������\n '/' - �������\n '+' - ��������\n '-' - ���������\n '^' - ���������� � �������\n");
	scanf("%f%c%f",&x,&c,&y);
	switch (c)
	{
	case '+':
		printf("����� ����� %.2f", x + y);
		break;
	
	case '-':
		printf("�������� ����� %.2f", x - y);
		break;
	case '*':
		printf("������������ ����� %.2f", x * y);
		break;
	case '/':
		printf("������� ����� %.2f", x / y);
		break;
	case '^':
		printf("%.2f � ������� %.2f ����� %.2f", x, y, pow(x, y));
		break;
	default:
		printf("������.\n�������� ���� �� �������������� ��������");
	}
}