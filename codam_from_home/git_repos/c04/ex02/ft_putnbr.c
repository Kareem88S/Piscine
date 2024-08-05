

#include <unistd.h>

void ft_putnbr(int nb);

int main()
{
    int nb = -12345;
    ft_putnbr(nb);
	write(1, "\n", 1);
    return 0;
}


void ft_putnbr(int nb)
{
    char num;

    if (nb == -2147483648)
    {
        write(1, "-2147483648", 11);
        return;
    }
    else if (nb < 0)
    {
        write(1, "-", 1);
        ft_putnbr(nb * -1);
    }
    else if (nb < 10)
    {
        num = '0' + nb;
        write(1, &num, 1);
        return ;
    }
    else if (nb > 9)
    {
        ft_putnbr(nb / 10);
        num = '0' + nb % 10;
        write(1, &num, 1);
        return ;
    }
    return ;
}
