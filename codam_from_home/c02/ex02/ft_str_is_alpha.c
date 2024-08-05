// #include <unistd.h>

// int ft_str_is_alpha(char *str);

// int main(void)
// {
//     char *str = "hallo daar";
//     char swtch; 
//     swtch = '0' + ft_str_is_alpha(str);
//     write(1, &swtch, 1);
//     return 0;
// }

int ft_str_is_alpha(char *str)
{
    while (*str)
    {
        if (!((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str++ <= 'Z')))
            return (0);
        str++;
    }
    return (1);  
}