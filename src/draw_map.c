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

void	put_coin(t_mlx *mlx, int w, int h)
{
	t_img	img;
	t_map	map;

	img.img_width = 0;
	img.img_width = 0;
	map.coin = mlx_xpm_file_to_image(mlx->mlx_ptr, COIN,
				&img.img_width, &img.img_height);
	mlx_put_image_to_window(mlx->mlx_ptr, mlx->win_ptr,
				map.coin, w * 64, h * 64);
}

void	put_grass(t_mlx *mlx, int w, int h)
{
	t_img	img;
	t_map	map;

	img.img_width = 0;
	img.img_height = 0;
	map.grass = mlx_xpm_file_to_image(mlx->mlx_ptr, GRASS,
				&img.img_width, &img.img_height);
	mlx_put_image_to_window(mlx->mlx_ptr, mlx->win_ptr,
				map.grass, w * 64, h * 64);
}

void	put_dirt(t_mlx *mlx, int w, int h)
{
	t_img	img;
	t_map	map;

	img.img_width = 0;
	img.img_width = 0;
	map.dirt = mlx_xpm_file_to_image(mlx->mlx_ptr, DIRT,
				&img.img_width, &img.img_height);
	mlx_put_image_to_window(mlx->mlx_ptr, mlx->win_ptr,
				map.dirt, w * 64, h * 64);
}

void	put_door(t_mlx *mlx, int w, int h)
{
	t_map	map;
	t_img	img;

	img.img_width = 0;
	img.img_width = 0;
	map.door = mlx_xpm_file_to_image(mlx->mlx_ptr, DOOR,
				&img.img_width, &img.img_height);
	mlx_put_image_to_window(mlx->mlx_ptr, mlx->win_ptr,
				map.door, w * 64, h * 64);
}

//void	img_init(t_img *img)
//{
//	img->img_height = ;
//	img->img_width = ;
//	img->player = mlx_xpm_file_to_image(img->game.mlx_ptr,
//			CAPYBARA, &img->img_width, &img->img_height);
//	img->coin = mlx_xpm_file_to_image(img->game.mlx_ptr,
//			COIN, &img->img_width, &img->img_height);
//	img->grass = mlx_xpm_file_to_image(img->game.mlx_ptr,
//			GRASS, &img->img_width, &img->img_height);
//	img->dirt = mlx_xpm_file_to_image(img->game.mlx_ptr,
//			DIRT, &img->img_width, &img->img_height);
//}

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
				put_dirt(mlx, j, i);
			else if (map->data[i][j] == 'P')
				put_player(mlx, j, i);
			else if (map->data[i][j] == '0')
				put_grass(mlx, j, i);
			else if (map->data[i][j] == 'E')
				put_door(mlx, j, i);
			else if (map->data[i][j] == 'C')
				put_coin(mlx, j, i);
		}
	}
}
