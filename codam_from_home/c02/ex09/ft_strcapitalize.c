


#include <unistd.h>

// char *ft_strcapitalize(char *str);

// int main(void)
// {
//     char str[] = "hiHi HAHah well capitalize that stuff";
//     char *start;

//     start = str;
//     while (*start)
//     {
//         write(1, start, 1);
//         start++;
//     }
//     write(1, "\n", 1);
    
//     start = str;
//     ft_strcapitalize(str);

    
//     while (*start)
//     {
//         write(1, start, 1);
//         start++;
//     }
//     return 0;
// }

char *ft_strcapitalize(char *str)
{
    int i;
    int new_word;

    i = 0;
    new_word = 1;
    while (str[i] != '\0')
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            if (new_word && (str[i] >= 'a' && str[i] <= 'z'))
                str[i] -= 32;
            if (!new_word && str[i] >= 'A' && str[i] <= 'Z')
                str[i] += 32;
            new_word = 0;
        }
        else
            new_word = 1;
        i++;
    }
    return (&str[0]);
}

