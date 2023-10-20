/*
1 Написать функцию, которая отображает символ переданный через аргументы

сигнатура функции:
void ft_putchar(char c);

Чтобы отобразить символ использовать функцию
write(1,&c,1);
*/
#include <stdio.h>

void ft_putchar(char c);

int main()
{
    ft_putchar('d');
    ft_putchar('\n');
    return 0;
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}