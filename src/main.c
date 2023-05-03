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



int count_moves(int key, void *param)
{
	(void)key;
	( void)param;
	ft_printf("SUS\n");
	return (0);
}

int close_window()
{
	ft_printf("Game closed successfully\n");
	exit(0);
}

int	main(void)
{
	void	*mlx_ptr;
	void	*win_ptr;
	mlx_ptr = mlx_init();
	win_ptr = mlx_new_window(mlx_ptr, 700, 500, "mlx_example");
	win_ptr = mlx_new_window(mlx_ptr, 700, 500, "mlx_example2");
	mlx_key_hook(win_ptr, count_moves, (void *)0);
	mlx_hook(win_ptr, 17, 0, close_window, NULL);
	mlx_loop(mlx_ptr);
}

