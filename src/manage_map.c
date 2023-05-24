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

t_map	map_creation(char *av)
{
	t_map	*map;

	map = (t_map *)malloc(sizeof(t_map));
	if (!map)
		exit_error("Error: Could not create a map\n");
	map->map_width = 0;
	map->map_height = 1;
	map->name = ft_strdup(av);
	if (!map->name)
		exit_error("Error: Could not create a map\n");
	if (!set_map_size(map, av))
		exit(EXIT_FAILURE);
	if (!set_map_data(map, av))
		exit(EXIT_FAILURE);
	return (*map);
}

int	set_map_data(t_map *map, char *av)
{
	int		fd;
	char	*line;
	size_t 	line_len;
	int 	i;

	i = -1;
	fd = open(av, O_RDONLY);
	if (fd == -1)
		return (0);
	map->data = (char **)malloc(sizeof(char *) * map->map_height);
	if (!map->data)
		exit_error("Could not create a map\n");
	while (i++ < map->map_height)
	{
		line = get_next_line(fd);
		if (!line)
			exit_error("Could not create the map\n");
		line_len = ft_strlen(line) - 1;
		while (line_len > 0 && (line[line_len] == 10 || line_len == 13))
			line[line_len--] = '\0';
		map->data[i] = line;
	}
	close(fd);
	return (1);
}

int set_map_size(t_map *map, char *av)
{
	int 	fd;
	char	*line;
	int 	line_len;

	fd = open(av, O_RDONLY);
	if (fd == -1)
		return (0);
	line = get_next_line(fd);
	line_len = ft_strlen(line);
	while (line_len > 0 && (line[line_len - 1] == 10 && line[line_len -1] == 13))
		line_len--;
	map->map_width = line_len;
	if (!line || !(map->map_width))
		return (0);
	free(line);
	line = get_next_line(fd);
	while (line)
	{
		free(line);
		get_next_line(fd);
		map->map_height++;
	}
	close(fd);
	return (1);
}

//--------------------**-------------------------

int map_height(char *map_fd)
{
	int fd;
	int lines;
	char *tmp;

	lines = 0;
	fd = open(map_fd, O_RDONLY);
	if (fd == -1)
	{
		perror("Found Error in file\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		tmp = get_next_line(fd);
		while (tmp) {
			free(tmp);
			tmp = get_next_line(fd);
			lines++;
		}
		close(fd);
	}
	return (lines);
}

int map_width(char *av)
{
	int 	fd;
	int 	width;
	char	*ligne;

	width = 0;
	fd = open(av, O_RDONLY);
	if (fd == -1)
	{
		perror("Found Error in file\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		ligne = get_next_line(fd);
		width = ft_strlen(ligne);
		free (ligne);
		close(fd);
	}
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

t_map	*init_map(char *av)
{
	t_map	*map;

	map = (t_map *)malloc(sizeof (t_map));
	if (!map)
		exit(EXIT_FAILURE);
	map->map_height = map_height(av);
	map->map_width = map_width(av);
	map->data = (char **)ft_calloc(map->map_height, sizeof(char *));
	return (map);
}

t_map	*manage_fd(char *av)
{
	int		i;
	int		fd;
	char	*output;
	t_map	*map;

	i = -1;
	map = init_map(av);
	fd = open(av, O_RDONLY);
	if (fd == -1)
		exit(1);
	while (++i < map->map_height)
	{
		read_map(fd);
		output = get_next_line(fd);
		map->data[i] = output;
	}
	return (map);
}
