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

//void	put_wall(t_mlx mlx)
//{
//	t_img	img;
//
//	mlx.x = 0;
//	mlx.y = 0;
//	img.img_width = 0;
//	img.img_width = 0;
//	img.img = mlx_xpm_file_to_image(mlx.mlx_ptr, WOODEN_FLOOR,
//			&img.img_width, &img.img_height);
//	mlx_put_image_to_window(mlx.mlx_ptr, mlx.win_ptr,img.img,
//	mlx.x * 100, mlx.y * 100);
//}

void	put_grass(t_mlx *mlx, int w, int h)
{
	t_img	img;

	img.img_width = 0;
	img.img_height = 0;
	img.img = mlx_xpm_file_to_image(mlx->mlx_ptr, GRASS,
				&img.img_width, &img.img_height);
	mlx_put_image_to_window(mlx->mlx_ptr, mlx->win_ptr,
				img.img, w * 64, h * 64);
}

void	draw_wooden_floor(t_mlx *mlx, int w, int h)
{
	t_img	img;

	img.img_width = 0;
	img.img_width = 0;
	img.img = mlx_xpm_file_to_image(mlx->mlx_ptr, WOODEN_FLOOR,
				&img.img_width, &img.img_height);
	mlx_put_image_to_window(mlx->mlx_ptr, mlx->win_ptr,
							img.img, w * 64, h * 64);
}

void	put_stairs(t_mlx *mlx, int w, int h)
{
	t_img	img;

	img.img_width = 0;
	img.img_width = 0;
	img.img = mlx_xpm_file_to_image(mlx->mlx_ptr, STAIRS,
									&img.img_width, &img.img_height);
	mlx_put_image_to_window(mlx->mlx_ptr, mlx->win_ptr,
							img.img, w * 64, h * 64);
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

// faire une fonction qui lit les donnees de ma structure ou je lis ma map, et je mets les
// images avec leur char

void	draw_map(t_map *map, t_mlx *mlx)
{
	int 	i;
	int 	j;

	i = -1;
	while (++i < map->map_height)
	{
		j = -1;
		while (++j < map->map_width)
		{
			if (map->data[i][j] == '1')
				draw_wooden_floor(mlx, j, i);
			else if (map->data[i][j] == 'P')
				put_player(mlx, j, i);
			else if (map->data[i][j] == '0')
				put_grass(mlx, j, i);
			else if (map->data[i][j] == 'E')
				put_stairs(mlx, j, i);
		}
	}
}

