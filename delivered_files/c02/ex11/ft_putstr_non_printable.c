

#include <unistd.h>


void	print_hex(char c, char *hexa_chars, char *buffer)
{
	buffer[0] = '\\';
	buffer[1] = hexa_chars[c / 16];
	buffer[2] = hexa_chars[c % 16];
	write(1, buffer, 3);
}

void	create_hex(char *hexa_dest)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 16)
	{
		if (i < 10)
			hexa_dest[i] = i + '0';
		else
		{
			hexa_dest[i] = j + 'a';
			j++;
		}
		i++;
	}
	return ;
}

// 0123456789abcdef
void	ft_putstr_non_printable(char *str)
{
	char	hexa_chars[16];
	char	buffer[3];

	create_hex(hexa_chars);
	while (*str)
	{
		if (*str < 32 || *str == 127)
			print_hex(*str, hexa_chars, buffer);
		else
			write(1, str, 1);
		str++;
	}
	return ;
}

int	main(void)
{
	char *string = "hello my pisciners\n. Tab \v it in.";

	ft_putstr_non_printable(string);
	return (0);
}