/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillarr <mvillarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:18:35 by mvillarr          #+#    #+#             */
/*   Updated: 2023/06/24 19:39:21 by mvillarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	img_init(t_mlx *mlx, t_img *dst, char *path)
{
	dst->width = 0;
	dst->height = 0;
	dst->mlx_img = mlx_xpm_file_to_image(mlx->mlx_ptr, path,
			&dst->width, &dst->height);
	dst->img_path = path;
}

void	init_atlas(t_scene *sc)
{
	img_init(&sc->mlx, &sc->atlas.player, CAPYBARA);
	img_init(&sc->mlx, &sc->atlas.coin, COIN);
	img_init(&sc->mlx, &sc->atlas.grass, GRASS);
	img_init(&sc->mlx, &sc->atlas.dirt, DIRT);
	img_init(&sc->mlx, &sc->atlas.door, DOOR);
}

void	put_img_to_window(t_mlx *mlx, t_img *img, int w, int h)
{
	mlx_put_image_to_window(mlx->mlx_ptr, mlx->win_ptr, img->mlx_img,
		w * 64, h * 64);
}

void	draw_map(t_scene *sc, t_mlx *mlx)
{
	int	i;
	int	j;

	i = -1;
	while (++i < sc->map_height)
	{
		j = -1;
		while (++j < sc->map_width)
		{
			if (sc->data[i][j] == '1')
				put_img_to_window(mlx, &sc->atlas.dirt, j, i);
			else if (sc->data[i][j] == 'P')
				put_img_to_window(mlx, &sc->atlas.player, j, i);
			else if (sc->data[i][j] == '0')
				put_img_to_window(mlx, &sc->atlas.grass, j, i);
			else if (sc->data[i][j] == 'E')
				put_img_to_window(mlx, &sc->atlas.door, j, i);
			else if (sc->data[i][j] == 'C')
				put_img_to_window(mlx, &sc->atlas.coin, j, i);
		}
	}
}

t_point	find_position(t_scene *sc, char c)
{
	int		i;
	int		j;
	int		count;
	t_point	pos;

	i = 0;
	j = 0;
	count = 0;
	while (sc->data[i])
	{
		while (sc->data[i][j])
		{
			if (sc->data[i][j] == c)
			{
				count++;
				check_count(count);
				pos.x = i;
				pos.y = j;
			}
			j++;
		}
		i++;
		j = 0;
	}
	return ((t_point){pos.x, pos.y});
}
