#include <limits.h>

void ft_putchar(const char ch);

void ft_putnbr(int nb)
{
    // INT_MAX ==  2147483647 (for 32-bit Integers)
    // INT_MIN == -2147483648 (for 32-bit Integers)
    // INT_MAX ==  9223372036854775807 (for 64-bit Integers)
    // INT_MIN == -9223372036854775808 (for 64-bit Integers)
    if (INT_MIN == nb)
    {
        ft_putchar('-');
        ft_putchar('2');
        nb = 147483647;
    }
    else if (0 > nb)
    {
        nb *= -1;
        ft_putchar('-');
    }

    if (9 < nb)
    {
        ft_putnbr(nb / 10);
    }
    ft_putchar((nb % 10) + '0');
}