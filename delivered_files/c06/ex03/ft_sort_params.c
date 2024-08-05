/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasherif <kasherif@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 23:02:05 by kasherif          #+#    #+#             */
/*   Updated: 2024/06/19 23:02:05 by kasherif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2);
void	sort_args(int argc, char *argv[]);
void	ft_print_sorted_args(int argc, char *argv[]);

int	main(int argc, char *argv[])
{
	int	i;

	if (argc == 1)
		return (0);
	if (argc == 2)
	{
		i = 0;
		while (argv[1][i] != '\0')
		{
			write(1, &argv[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
		return (0);
	}
	sort_args(argc, argv);
}

void	sort_args(int argc, char *argv[])
{
	char	*temp;
	int		i;
	int		j;

	i = 0;
	while (i < argc -1)
	{
		j = 0;
		while (j < argc - i - 1)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				temp = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
	ft_print_sorted_args(argc, argv);
	return ;
}

void	ft_print_sorted_args(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
