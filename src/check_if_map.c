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
	int	line;
	int i;
	int j;

	line = map->map_width;
	i = 1;
	while (i < map->map_height)
	{
		j = 0;
		while (map->data[i][j] != '\n' && map->data[i][j])
			j++;
		if (j != line)
			return (0);
		i++;
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

int	check_map_name(char *av)
{
	int i;


	i = 0;
	while (!av)
		return (0);
	if (av[i])
		i++;
	i -= 1;
	if (av[i] == 'r' && av[i - 1] == 'e' && av[i - 2] == 'b'
		&& av[i - 3] == '.' )
		return (0);
	return (1);
}

int	map_check(char *name)
{
//	t_map *map;
	if (!check_map_name(name))
	{
		ft_printf("Map's name is not valid ! \n");
		exit (1);
	}
	if (!there_is_a_map(name))
	{
		ft_printf("No map found\n");
		exit(1);
	}
//	if (!map_is_rectangle(map))
//	{
//		ft_printf("Map is not valid: not rectangular map!\n");
//		return (0);
//	}
	return (0);
}

//int 	check_

int item_check(t_map *map)
{
	if (map->coin == map->nbr_coins)
		return (1);
	return (0);
}
