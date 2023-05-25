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

int map_width(char	*av)
{
	int 	width;
	char	*ligne;
	int 	fd;

	width = 0;
	fd = open(av, O_RDONLY);
	ligne = get_next_line(fd);
	width = ft_strlen(ligne);
	free (ligne);
	close(fd);
	return (width);
}

char	**read_map(int fd)
{
	int		i;
	char	*str;
	char	**map;

	i = 0;
	map = (char **)ft_calloc(sizeof(char), 9999);
	while(map)
	{
		str = get_next_line(fd);
		if (!str)
			break;
		map[i] = str;
		i++;
	}
	map[i] = NULL;
	return (map);
}

t_map	*init_map(int fd, char	*av)
{
	t_map	*map;

	map = (t_map *)malloc(sizeof (t_map));
	if (!map)
		exit(EXIT_FAILURE);
	map->map_height = map_height(fd);
	map->map_width = map_width(av);
	map->data = read_map(fd);
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
	map =init_map(fd, av);
	close(fd);
	return (map);
}
