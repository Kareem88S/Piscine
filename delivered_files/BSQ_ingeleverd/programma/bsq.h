/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbank <dbank@student.codam.nl>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 14:06:24 by kasherif          #+#    #+#             */
/*   Updated: 2024/06/26 22:26:35 by dbank            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

typedef struct s_map
{
	int		height;
	int		width;
	char	obstacle;
	char	to_place;
	char	empty_space;
	char	**map;
	int		bsq;
	int		bsq_x;
	int		bsq_y;
	int		x;
	int		y;
	int		iterator;
}	t_map;

int		is_valid_input(t_map *map);
void	print_map(t_map *map);
int		open_file(char *av);
int		read_map_file(int fd, t_map *map);
int		read_line(int fd, char *line, int *bytes_read);
int		read_other_lines(int fd, t_map *map, int *bytes_read);
int		read_first_line(int fd, char *first_line, t_map *map, int *bytes_read);
int		read_header(int fd, t_map *map, int *bytes_read);
int		malloc_d_array_map(t_map *map);
void	free_all(t_map *map);
char	*ft_strcpy(char *dest, char *src);
int		bsq_finder(t_map *map);
int		move_bsq(int cur_bsq, t_map *map);
int		error_file_open(void);
int		error_file_read(void);
int		map_error(void);
int		malloc_error(void);
int		bsq_finder_error(void);
void	write_bsq_in_field(t_map *map);
void	field_printer(t_map *map);
void	header_into_map(char *temp, t_map *map, int header_len);
void	initialize_struct(t_map *map);
int		check_for_obstacle(t_map *map, int cur_bsq);

#endif