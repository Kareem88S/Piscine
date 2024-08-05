

#include <unistd.h>

void ft_putnbr(int nb);
void ft_putchar(char c);


int main()
{
    ft_putnbr(-4321);
    return (0);
}

void ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        write(1, "-2147483648", 11);
        return;
    }
    if (nb < 0)
    {
        write(1, "-", 1);
        ft_putnbr(nb * -1);
    }
    if (nb > 9)
    {
        ft_putnbr(nb / 10);
        ft_putchar('0' + nb % 10);
        return;
    }
    else
        ft_putchar('0' + nb);

}

void ft_putchar(char c)
{
    write(1, &c, 1);
    return;
}