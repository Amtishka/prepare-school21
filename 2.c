/*
2 Написать функцию, которая выводит англ алфавит в нижнем регистре
в порядке возрастания. То есть от буквы a до z
сигнатура функции:
void ft_print_alphabet(void);
*/

#include <stdio.h>

void ft_putchar(char c);
void ft_print_alphabet(void);

int main()
{
    ft_print_alphabet();
    return 0;
}

void ft_print_alphabet()
{
    for (char i = 97; i <= 122; ++i)
    {
        ft_putchar(i);
    }
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}