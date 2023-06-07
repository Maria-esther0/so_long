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

void	movement(t_map *map, int new_x, int new_y)
{
	map->map_width += new_x;
	map->map_height += new_y;
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
//
//
//void	move_left(t_map *map, int x, int y)
//{
//	int i;
//	int j;
//
//	i = 0;
//	while (i < map->map_height)
//	{
//		j = -1;
//		while (++j < map->map_width)
//		{
//			movement(map, x, y);
//		}
//		i++;
//	}
//}
//
//void	move_right(t_map *map, int x, int y)
//{
//	int i;
//	int j;
//
//	i = -1;
//	while (i++ < map->map_height)
//	{
//		j = -1;
//		while (++j < map->map_width)
//		{
//			movement(map, x, y);
//		}
//	}
//}
//
//void	move_up(t_map *map, int x, int y)
//{
//	int i;
//	int j;
//
//	i = -1;
//	while (i++ < map->map_height)
//	{
//		j = -1;
//		while (++j < map->map_width)
//		{
//			movement(map, x, y);
//		}
//	}
//}
//
//void	move_down(t_map *map, int x, int y)
//{
//	int i;
//	int j;
//
//	i = -1;
//	while (i++ < map->map_height)
//	{
//		j = -1;
//		while (++j < map->map_width)
//		{
//			movement(map, x, y);
//		}
//	}
//}
