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

void	movement(t_map *map, int x, int y)
{
	char	next;

	next = map->data[map->map_width + map->map_width]
			[map->map_height + map->map_height];
    if (next == '0' || next == 'C' || next == 'P')
    {

    }
}

//void	set_move(t_map *map, int key)
//{
//	int x;
//	int y;
//
//	if (key == K_W)
//		move_up( );
//	if (key == K_A)
//		move_left(map, );
//	if (key == K_S)
//		move_down(map, );
//	if (key == K_D)
//		move_right(map, );
//}


void	move_left(t_map *map, int x, int y)
{
	int i;
	int j;

	i = -1;
	while (i++ < map->map_height)
	{
		j = -1;
		while (++j < map->map_width)
		{
			movement(map, x, y);
		}
	}
}

void	move_right(t_map *map, int x, int y)
{
	int i;
	int j;

	i = -1;
	while (i++ < map->map_height)
	{
		j = -1;
		while (++j < map->map_width)
		{
			movement(map, x, y);
		}
	}
}

void	move_up(t_map *map, int x, int y)
{
	int i;
	int j;

	i = -1;
	while (i++ < map->map_height)
	{
		j = -1;
		while (++j < map->map_width)
		{
			movement(map, x, y);
		}
	}
}

void	move_down(t_map *map, int x, int y)
{
	int i;
	int j;

	i = -1;
	while (i++ < map->map_height)
	{
		j = -1;
		while (++j < map->map_width)
		{
			movement(map, x, y);
		}
	}
}
