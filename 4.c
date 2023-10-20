/*
4 Написать функцию, которая отображает "N" или "P" в зависимости от того,
какого знака число. Если "n" отрицательное, то вывести "N". Если положительное, то "P".

сигнатура функции:
void ft_is_negative(int n);
*/

#include <stdio.h>

void ft_putchar(char c);
void ft_is_negative(int n);

int main()
{
    ft_is_negative(5);
    // ft_is_negative(0);
    // ft_is_negative(-5);
    return 0;
}

void ft_is_negative(int n)
{
    if (n >= 0)
    {
        ft_putchar('P');
    }
    else
    {
        ft_putchar('N');
    }
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}