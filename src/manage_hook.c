/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_hook.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillarr <mvillarr@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 17:06:51 by mvillarr          #+#    #+#             */
/*   Updated: 2023/05/26 17:07:22 by mvillarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	key_hooks(int key, t_mlx *mlx)
{
//	t_map map;

	if (key == K_ESC)
		close_window();
	else if (key == K_W)
	{
//		player_move(&map, map.map_height, map.map_width);
		ft_printf("Pressed W\n");
	}
	else if (key == K_S)
		ft_printf("Pressed S\n");
	else if (key == K_A)
		ft_printf("Pressed A\n");
	else if (key == K_D)
		ft_printf("Pressed D\n");
//	else if (key == K_UP)
//		ft_printf("Pressed Up key\n");
//	else if (key == K_DOWN)
//		ft_printf("Pressed Down key\n");
//	else if (key == K_LEFT)
//		ft_printf("Pressed Left key\n");
//	else if (key == K_RIGHT)
//		ft_printf("Pressed Right key\n");
	(void)mlx;
	return 0;
}
