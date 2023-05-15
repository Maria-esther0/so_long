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
	mlx.x = 0;
	mlx.y = 0;
	mlx.img_width = 0;
	mlx.img_width = 0;
	mlx.img_path = "./img/wooden.xpm";
	mlx.img = mlx_xpm_file_to_image(mlx.mlx_ptr, mlx.img_path, &mlx.img_width, &mlx.img_height);
	mlx_put_image_to_window(mlx.mlx_ptr, mlx.win_ptr, mlx.img, mlx.x, mlx.y);
}
