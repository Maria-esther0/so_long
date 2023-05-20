/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillarr <mvillarr@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 15:29:15 by mvillarr          #+#    #+#             */
/*   Updated: 2023/05/20 15:29:18 by mvillarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	map_is_rectangle(t_map *map)
{
	long unsigned int	width;
	int 				i;

	i = -1;
	width = ft_strlen(map->data[i]);
	if (map == NULL || map->data == NULL || map->map_width <= 0 || map->map_height <= 0)
		return (0);
	while (++i < map->map_height)
	{
		if (ft_strlen(map->data[i]) != width)
			return (0);
	}
	return (1);
}

int	there_is_a_map(char	*name)
{
	int fd;

	fd = open(name, O_RDONLY);
	if (fd == -1)
		return (0);
	close(fd);
	return (1);
}
