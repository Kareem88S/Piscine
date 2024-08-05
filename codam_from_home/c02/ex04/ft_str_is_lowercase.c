#include <unistd.h>

int ft_str_is_lowercase(char *str);

int main(void)
{
    char *str = "hallo daar";
    char swtch; 
    swtch = '0' + ft_str_is_lowercase(str);
    write(1, &swtch, 1);
    return 0;
}

int ft_str_is_lowercase(char *str)
{
    while (*str)
    {
        if (!(*str >= 'a' && *str <= 'z'))
            return (0);
        str++;
    }
    return (1);  
}