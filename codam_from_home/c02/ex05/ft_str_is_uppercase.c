#include <unistd.h>

int ft_str_is_uppercase(char *str);

int main(void)
{
    char *str = "HI";
    char swtch; 
    swtch = '0' + ft_str_is_uppercase(str);
    write(1, &swtch, 1);
    return 0;
}

int ft_str_is_uppercase(char *str)
{
    while (*str)
    {
        if (!(*str >= 'A' && *str <= 'Z'))
            return (0);
        str++;
    }
    return (1);  
}