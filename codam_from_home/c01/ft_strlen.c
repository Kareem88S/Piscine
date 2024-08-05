

#include <unistd.h>

int ft_strlen(char *str);

int main(void)
{
    char size = '0';
    size = size + ft_strlen("hoi");
    write(1, &size, 1);
}

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (*str++ != '\0')
        i++;
    return (i);
}