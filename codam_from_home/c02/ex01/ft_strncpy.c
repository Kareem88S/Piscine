// #include <stdio.h>

// char *ft_strncpy(char *dest, char *src, unsigned int n);

// int main(void)
// {
//     char *src = "ahoi daar hahahaha";
//     char dest[12];
//     unsigned int n;

//     n =11;
//     ft_strncpy(dest, src, n);
// /*      n = sizeof(dest) - 1;            ideal use to null terminate
//         dest[sizeof(dest) - 1] = '\0';
//  */    
//     printf("%s\n", dest);
//     return 0;

// }

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    char *address;
    int i;

    i = 0;
    address = dest;
    while (*src && (i++ < n))
        *dest++ = *src++;
    if (sizeof(dest) - 1 < n)
        *dest = '\0';
    return (address);
}
