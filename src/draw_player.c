/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_player.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillarr <mvillarr@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 14:22:12 by mvillarr          #+#    #+#             */
/*   Updated: 2023/05/24 14:23:01 by mvillarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	player_sprites(t_map *map, int width, int x, int y)
{
	if (map->data[y][x] == '1')
	{
		mlx_put_image_to_window(map->map.mlx_ptr, map->map.win_ptr,
								WOODEN_FLOOR, width, y * IMG_SIZE);
		mlx_put_image_to_window(map->map.mlx_ptr, map->map.win_ptr,
								GRASS, width, y * IMG_SIZE);
	}
}

void	load_player_sprites(t_mlx *mlx, char **frames, int num_frames, void **dest)
{


//	char *loading[4];
//
//	loading [0] = CAT_SPRITE1;
//	loading [1] = CAT_SPRITE2;
//	loading [2] = CAT_SPRITE3;
//	loading [3] = CAT_SPRITE4;
}


