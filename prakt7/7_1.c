#include <stdio.h>
#include <locale.h>
void main()
{
    setlocale(LC_ALL, "RUS");
    char c;
    printf("������� ������: ");
    scanf_s("%c", &c);
    if ((c >= '0' && c <= '9')) {
        printf("��� �����");
    }
    else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) printf("��� �����");
    else printf("��� �� ����� � �� �����");
}