
#include <unistd.h>

int ft_str_is_printable(char *str);

int main(void)
{
    char *str = "HI";
    char swtch; 
    swtch = '0' + ft_str_is_printable(str);
    write(1, &swtch, 1);
    return 0;
}

int ft_str_is_printable(char *str)
{
    while (*str)
    {
        if (!(*str >= 32 && *str <= 127))
            return (0);
        str++;
    }
    return (1);  
}