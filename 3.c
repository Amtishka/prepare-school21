/*
3 Написать функцию, которая выводит англ алфавит в нижнем регистре в порядке убывания. То есть от буквы z до a

сигнатура функции:
void ft_print_reverse_alphabet(void);
*/

#include <stdio.h>

void ft_putchar(char c);

void ft_print_reverse_alphabet(void);

int main()
{
    ft_print_reverse_alphabet();
    return 0;
}

void ft_print_reverse_alphabet()
{
    for (char i = 'z'; i >= 'a'; --i)
    {
        ft_putchar(i);
    }
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}