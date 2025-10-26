#include <stdio.h>
#include <locale.h>
void main()
{
    setlocale(LC_ALL, "RUS");
    char c;
    printf("Введите символ: ");
    scanf_s("%c", &c);
    if ((c >= '0' && c <= '9')) {
        printf("Это цифра");
    }
    else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) printf("Это буква");
    else printf("Это не буква и не цифра");
}