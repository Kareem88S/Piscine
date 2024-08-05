
#include <stdio.h>
#include <unistd.h>

// void ft_rev_int_tab(int *tab, int size);

// int main()
// {
//     int tab[] = {1, 2, 3, 4, 5}; 
//     int size;
//     int i;

//     size = 5;

//     i = 0;
//     while (i < size)
//         printf("%i", tab[i++]);

//     ft_rev_int_tab(tab, size);
//     printf("\n");

//     i = 0;
//     while (i < size)
//         printf("%i", tab[i++]);

//     return (0);
// }

void ft_rev_int_tab(int *tab, int size)
{
    int i;
    int temp;

    while (i < size / 2)
    {
        temp = tab[i];
        tab[i] = tab[size - 1 - i];
        tab[size - 1 - i] = temp;
        i++;
    }
    return;
}