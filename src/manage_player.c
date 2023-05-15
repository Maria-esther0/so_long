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

void	put_player(t_mlx mlx)
{
	mlx.x = 200;
	mlx.y = 200;
	mlx.img_width = 0;
	mlx.img_width = 0;
	mlx.img_path = "./img/character_from_side.xpm";
	mlx.img = mlx_xpm_file_to_image(mlx.mlx_ptr, mlx.img_path, &mlx.img_width, &mlx.img_height);
	mlx_put_image_to_window(mlx.mlx_ptr, mlx.win_ptr, mlx.img, mlx.x, mlx.y);
}
