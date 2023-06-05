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

int close_window(void)
{
	ft_printf("\nGame closed successfully!\n");
	exit(0);
}

int	main(int ac, char **av)
{
	t_mlx mlx;
	t_map *map;
	if (ac != 2)
	{
		printf("Usage: ./%s <path/to/map.ber>\n", av[0]);
		return (1);
	}
	map = manage_fd(av[1]);
	mlx.mlx_ptr = mlx_init();
//	mlx->win_ptr = mlx_new_window(mlx.mlx_ptr, map->map_width, map->map_height, "NEW WINDOW");
	mlx.win_ptr = mlx_new_window(mlx.mlx_ptr, map->map_width * 64, map->map_height * 64,
			"NEW WINDOW");
	draw_map(map, &mlx);
//	mlx_key_hook(mlx.win_ptr, count_moves, (void *)0);
//	mlx_key_hook(mlx.win_ptr, move_player, (void *)0);
	mlx_key_hook(mlx.win_ptr, key_hooks, (void *)0);
	mlx_hook(mlx.win_ptr, 17, 0, close_window, NULL);
	mlx_loop(mlx.mlx_ptr);
	return (0);
}
