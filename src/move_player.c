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

void	move(t_map *map, int pos_x, int pos_y)
{
	char	next;
	t_img	img;

	player_pos(map);
//	ft_printf("pos x = %d\n", pos_x);
//	ft_printf("pos y = %d\n", pos_y);
//	ft_printf("player x = %d\n", map->x_player);
//	ft_printf("player y = %d\n", map->y_player);
	next = map->data[map->y_player + pos_y][map->x_player + pos_x];
	ft_printf("next %c\n", next);
	while (next == '0' || next == 'C' || next != '1')
	{
		if (next == 'C')
		{
			map->coin++;
			map->data[map->x_player + pos_x][map->y_player + pos_y] = 0;
		}
		map->player = mlx_xpm_file_to_image(map->map.mlx_ptr, CAPYBARA,
					&img.img_width, &img.img_height);
		mlx_put_image_to_window(map->map.mlx_ptr, map->map.win_ptr,
					map->player, (map->x_player + pos_x) * 64, (map->y_player + pos_y) * 64);
		map->grass = mlx_xpm_file_to_image(map->map.mlx_ptr, GRASS,
					&img.img_width, &img.img_height);
		mlx_put_image_to_window(map->map.mlx_ptr, map->map.win_ptr,
								map->grass,  64 * map->x_player + pos_x, 64 * map->y_player + pos_y);
		map->x_player += pos_x;
		map->y_player += pos_y;
		next++;
	}
	exit_move(map, next);
}
//
//void	moves(t_map *map, int pos_x, int pos_y)
//{
//	char next;
//
//	next = map->data[map->x_player][map->y_player];
//	while (next == '1')
//	{
//		map->x_player++;
//	}
//	if (next == '0')
//	{
//
//	}
//}

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
				return ;
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
			map->nbr_steps++;
		 	ft_printf("Steps made: %d\n", map->nbr_steps);
		}
		close_window();
	}
}
