

#include <stdio.h>

int ft_strlen(char *str);

int main()
{
    int size;
    char string_1[] = "hallo";

    size = ft_strlen(string_1);
    printf("size = %i", size);
    return (0);
}

int ft_strlen(char *str)
{
    int count;

    count = 0;
    while (str[count] != '\0')
        count++;
    return (count);
}
