// #include <unistd.h>

// int ft_str_is_numeric(char *str);

// int main(void)
// {
//     char *str = "12345";
//     char swtch; 
//     swtch = '0' + ft_str_is_numeric(str);
//     write(1, &swtch, 1);
//     return 0;
// }

int ft_str_is_numeric(char *str)
{
    while (*str)
    {
        if (!(*str >= '0' && *str <= '9')) 
            return (0);
        str++;
    }
    return (1);  
}