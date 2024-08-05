

#include <unistd.h>
#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int main()
{
    int tab[] = {4, 2, 5, 3, 1}; 
    int size;
    int i;

    size = 5;

    i = 0;
    while (i < size)
        printf("%i", tab[i++]);

    ft_sort_int_tab(tab, size);
    printf("\n");

    i = 0;
    while (i < size)
        printf("%i", tab[i++]);

    return (0);
}

