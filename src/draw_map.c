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
	img.img = mlx_xpm_file_to_image(mlx.mlx_ptr, img.img_path, &img.img_width, &img.img_height);
	mlx_put_image_to_window(mlx.mlx_ptr, mlx.win_ptr, img.img,
	mlx.x * 100, mlx.y * 100);
}
