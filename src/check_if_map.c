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

int	map_check(char *name, t_map map)
{
//	if (!there_is_a_map(name))
//	{
//		ft_printf("\nNo map found\n");
//		return (0);
//	}
	(void)name;
	if (!map_is_rectangle(&map))
	{
		ft_printf("\nMap is not valid: not rectangular map!\n");
		return (0);
	}
	else if (!check_wall(&map))
	{
		ft_printf("\nMap does not have valid walls\n");
		return (0);
	}
	return (1);
}

int check_args(int ac, char **av)
{
	int av_size;

	av_size = 0;
	if (ac != 2)
	{
		printf("Usage: %s <path/to/map.ber>\n", av[0]);
		exit (0);
	}
	while (av[1][av_size] != '\0')
		av_size++;
	if (check_map_name(av_size, av) == 1)
	{
		ft_printf("\nMap does not end with '.ber'\n");
		exit (0);
	}
	return (0);
}

//fonction works
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

//fonction does not work
//int	there_is_a_map(char	*av)
//{
//	if (ft_strlen(av) != 0)
//		return (0);
//	return (1);
//}

int check_map_name(int av_size, char **av)
{
	int result;

	result = 0;
	if (av[1][av_size - 4] != '.')
		result = 1;
	else if (av[1][av_size - 3] != 'b')
		result = 1;
	else if (av[1][av_size - 2] != 'e')
		result = 1;
	else if (av[1][av_size - 1] != 'r')
		result = 1;
	return (result);
}

int	check_wall(t_map *map)
{
	int	i;

	i = map->map_width;
	while (i--)
	{
		if (map->data[0][i] != '1' || map->data[map->map_height - 1][i] != '1')
			return (0);
	}
	i = map->map_height;
	while (i--)
	{
		if (map->data[i][0] != '1' || map->data[i][map->map_width - 1] != '1')
			return (0);
	}
	return (1);
}

int item_check(t_map *map)
{
	if (map->coin == map->nbr_coins)
		return (1);
	return (0);
}
