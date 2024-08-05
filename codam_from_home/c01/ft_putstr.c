

#include <unistd.h>

void ft_putstr(char *str);

int main()
{
    ft_putstr("hi");
}

void ft_putstr(char *str)
{
    int counter;
    int i;

    i = 0;
    counter = 0;
    while (str[counter] != '\0')
        counter++;
    while (i < counter)
        write (1, &str[i++], 1);
    return;
}