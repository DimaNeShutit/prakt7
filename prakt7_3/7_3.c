#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "RUS");
	int n, days;
	puts("������� ���������� �������:");
	scanf_s("%d", &n);
	puts("������� ���������� ����:");
	scanf_s("%d", &days);
	days = days / 30;
	n = n + days;
	switch(n)
	{
	case 0:
		puts("�� ��� ������");
		break;
	case 1:
		puts("�������");
		break;
	case 2:
		puts("����");
		break;
	case 3:
		puts("������");
		break;
	case 4:
		puts("���");
		break;
	case 5:
		puts("����");
		break;
	case 6:
		puts("����");
		break;
	case 7:
		puts("������");
		break;
	case 8:
		puts("��������");
		break;
	case 9:
		puts("�������");
		break;
	case 10:
		puts("������");
		break;
	case 11:
		puts("�������");
		break;
	case 12:
		puts("������ ���������� ����");
		break;
	default:
		puts("������");
	}
}