/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_player.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillarr <mvillarr@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:18:59 by mvillarr          #+#    #+#             */
/*   Updated: 2023/05/15 15:19:00 by mvillarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	put_player(t_mlx *mlx, int x, int y)
{
	t_img	img;

	mlx->x = 200;
	mlx->y = 200;
	img.img_width = 0;
	img.img_width = 0;
	img.img = mlx_xpm_file_to_image(mlx->mlx_ptr, CAPYBARA,
			&img.img_width, &img.img_height);
	mlx_put_image_to_window(mlx->mlx_ptr, mlx->win_ptr,
			img.img, x * 64, y * 64);
}
