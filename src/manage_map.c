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

int	get_w_h_map(int fd, t_map **map)
{
	char *tmp;

	tmp = get_next_line(fd);
	(*map)->map_width = ft_strlen(tmp + 1);
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
		ft_printf("Map : %s", (*m)->data[i]);
		i++;
	}
	return (0);
}

void init_map(int fd, char	*av, t_map *map)
{
	(void)av;

	map->map_width = 0;
	map->map_height = 0;
	get_w_h_map(fd, &map);
}

void	manage_fd(char *av, t_map *map)
{
	int		fd;

	fd = open(av, O_RDONLY);
	if (fd == -1)
	{
		perror("Found Error in file\n");
		exit(EXIT_FAILURE);
	}
	init_map(fd, av, map);
	close(fd);
	read_map(&map, av);
}
