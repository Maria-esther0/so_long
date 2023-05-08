/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillarr <mvillarr@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 15:10:12 by mvillarr          #+#    #+#             */
/*   Updated: 2023/04/28 15:10:14 by mvillarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int count_moves(void)
{
	static int mv;

	mv++;
	ft_printf("mv %d\n", mv);
	return (0);
}

int close_window(void)
//int close_window(t_mlx *mlx)
{
	ft_printf("game closed successfully\n");
//	mlx_destroy_window(mlx->win_ptr, mlx->win_ptr);
	exit(0);
}

int	main(void)
{
	t_mlx mlx;
	mlx.mlx_ptr = mlx_init();
	mlx.win_ptr = mlx_new_window(mlx.mlx_ptr, WINDOW_WIDTH, WINDOW_HEIGHT, "NEW WINDOW");
	mlx.img_path = "./img/tomato.xpm";
	mlx.img_width = 500;
	mlx.img_width = 500;
	mlx.img = mlx_xpm_file_to_image(mlx.mlx_ptr, mlx.img_path, &mlx.img_width, &mlx.img_height);
	mlx_key_hook(mlx.win_ptr, count_moves, (void *)0);
	mlx_hook(mlx.win_ptr, 17, 0, close_window, NULL);
	mlx_loop(mlx.mlx_ptr);
	return (0);
}

