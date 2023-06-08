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

void	put_player(t_mlx *mlx, int x, int y)
{
	t_img	img;
	t_map	map;

	mlx->x = 200;
	mlx->y = 200;
	img.img_width = 0;
	img.img_width = 0;
	map.player = mlx_xpm_file_to_image(mlx->mlx_ptr, CAPYBARA,
							&img.img_width, &img.img_height);
	mlx_put_image_to_window(mlx->mlx_ptr, mlx->win_ptr,
							map.player, x * 64, y * 64);
}
