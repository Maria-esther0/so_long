/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillarr <mvillarr@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:18:35 by mvillarr          #+#    #+#             */
/*   Updated: 2023/05/15 15:18:37 by mvillarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	put_wall(t_mlx mlx)
{
	t_img	img;

	mlx.x = 0;
	mlx.y = 0;
	img.img_width = 0;
	img.img_width = 0;
	img.img_path = "./img/wooden.xpm";
	img.img = mlx_xpm_file_to_image(mlx.mlx_ptr, img.img_path,
			&img.img_width, &img.img_height);
	mlx_put_image_to_window(mlx.mlx_ptr, mlx.win_ptr,img.img,
	mlx.x * 100, mlx.y * 100);
}

void	img_init(t_img *img)
{
	img->img_height = WINDOW_HEIGHT;
	img->img_width = WINDOW_WIDTH;
	img->wooden_floor = mlx_xpm_file_to_image(img->game.mlx_ptr,
			WOODEN_FLOOR, &img->img_width, &img->img_height);
	img->standing_cat = mlx_xpm_file_to_image(img->game.mlx_ptr,
			STANDING_CAT, &img->img_width, &img->img_height);
	img->jumping_cat = mlx_xpm_file_to_image(img->game.mlx_ptr,
			JUMPING_CAT, &img->img_width, &img->img_height);
	img->still_cat = mlx_xpm_file_to_image(img->game.mlx_ptr,
			STILL_CAT, &img->img_width, &img->img_height);
	img->moving_cat = mlx_xpm_file_to_image(img->game.mlx_ptr,
			MOVING_CAT, &img->img_width, &img->img_height);
}

void	player_sprites(t_map *map, int width, int x, int y)
{
	if (map->data[y][x] == '1')
	{
		mlx_put_image_to_window(map->map.mlx_ptr, map->map.win_ptr,
			WOODEN_FLOOR, width, y * IMG_SIZE);
	}
}
