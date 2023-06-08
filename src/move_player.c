/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_player.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillarr <mvillarr@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:19:06 by mvillarr          #+#    #+#             */
/*   Updated: 2023/05/15 15:19:07 by mvillarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	move(t_map *map, int pos_y, int pos_x)
{
	char	next;

	next = map->data[map->x_player + pos_x][map->y_player + pos_y];
	if (next == '0' || next == 'P' || next == 'C')
	{
		if (next == 'C')
		{
			map->coin++;
			map->data[map->x_player + pos_x][map->y_player + pos_y] = 0;
		}
		put_img(map, 64 * map->x_player, 64 * map->y_player, map->grass);
		map->x_player += pos_x;
		map->y_player += pos_y;
		put_img(map, 64 * map->x_player + pos_x, 64 * map->y_player + pos_y, map->player);
		map->nbr_steps++;
		ft_printf("You made %d steps\n", map->nbr_steps);
	}
	exit_move(map, next);
}

void	player_pos(t_map *map)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (map->data[i])
	{
		while (map->data[i][j])
		{
			if (map->data[i][j] == 'P')
			{
				map->x_player = j;
				map->y_player = i;
			}
			j++;
		}
		i++;
		j = 0;
	}
}

void	exit_move(t_map *map, char next)
{
	if (next == 'E')
	{
		if (item_check(map) == 1)
		{
			map->nbr_coins++;
		 	ft_printf("Coins collected: %d\n", map->nbr_coins);
		}
		close_window();
	}
}
