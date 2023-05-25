/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillarr <mvillarr@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:18:46 by mvillarr          #+#    #+#             */
/*   Updated: 2023/05/15 15:18:49 by mvillarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int map_height(int fd)
{
	int lines;
	char *tmp;

	lines = 0;
	tmp = get_next_line(fd);
	while (tmp)
	{
		free(tmp);
		tmp = get_next_line(fd);
		lines++;
	}
	return (lines);
}

int map_width(int fd)
{
	int 	width;
	char	*ligne;

	width = 0;
	ligne = get_next_line(fd);
	width = (int)ft_strlen(ligne);
	free (ligne);
	close(fd);
	return (width);
}

int	get_w_h_map(int fd, t_map **map)
{
	char *tmp;

	tmp = get_next_line(fd);
	(*map)->map_width = ft_strlen(tmp);
	while (tmp)
	{
		free(tmp);
		tmp = NULL;
		tmp = get_next_line(fd);
		(*map)->map_height++;
	}
	free(tmp);
	tmp = NULL;
	return (0);
}

int	read_map(t_map **m, char *av)
{
	int		i;
	int		fd;

	fd = open(av, O_RDONLY);
	if (fd == -1)
	{
		perror("Couldn't open file\n");
		exit(EXIT_FAILURE);
	}
	i = 0;
	(*m)->data = (char **)ft_calloc(sizeof(char), ((*m)->map_width) * ((*m)->map_height));
	while (i < (*m)->map_height)
	{
		(*m)->data[i] = get_next_line(fd);
		i++;
	}
	return (0);
}

t_map	*init_map(int fd, char	*av)
{
	t_map	*map;
	(void)av;

	map = (t_map *)malloc(sizeof (t_map));
	if (!map)
		exit(EXIT_FAILURE);
	map->map_width = 0;
	map->map_height = 0;
	get_w_h_map(fd, &map);

	return (map);
}

t_map	*manage_fd(char *av)
{
	int		fd;
	t_map	*map;

	fd = open(av, O_RDONLY);
	if (fd == -1)
	{
		perror("Found Error in file\n");
		exit(EXIT_FAILURE);
	}
	map = init_map(fd, av);
	close(fd);
	read_map(&map, av);
	return (map);
}
