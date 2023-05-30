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

void	load_frames(t_mlx *mlx, char **frames, int num_frames, void **dest)
{
	int	i;
	int	width;
	int height;

	i = -1;
	while (++i < num_frames)
	{
		dest[i] = mlx_xpm_file_to_image(mlx->mlx_ptr, frames[i], &width, &height);
		if (dest[i] == NULL)
			exit_error("Couldn't load player sprites correctly");
	}
}

void	load_cat_frame(t_mlx *mlx, t_img *img)
{
	char *loading[4];

	loading [0] = CAT_SPRITE1;
	loading [1] = CAT_SPRITE2;
	loading [2] = CAT_SPRITE3;
	loading [3] = CAT_SPRITE4;
	load_frames(mlx, loading, sizeof(loading) / sizeof(char *), (void **)img->load_cat);
}

//void	load_img(t_mlx *mlx, t_img *img)
//{
//	load_cat_frame(mlx, img);
//	// can add other cat frames
//}
