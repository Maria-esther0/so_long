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
	ft_printf("Game closed successfully!\n");
	exit(0);
}

int	key_hooks(int key, t_mlx *mlx)
{
	if (key == K_ESC)
		close_window();
	else if (key == K_W)
		ft_printf("Pressed W\n");
	else if (key == K_S)
		ft_printf("Pressed S\n");
	else if (key == K_A)
		ft_printf("Pressed A\n");
	else if (key == K_D)
		ft_printf("Pressed D\n");
	else if (key == K_UP)
		ft_printf("Pressed Up key\n");
	else if (key == K_DOWN)
		ft_printf("Pressed Down key\n");
	else if (key == K_LEFT)
		ft_printf("Pressed Left key\n");
	else if (key == K_RIGHT)
		ft_printf("Pressed Right key\n");
	(void)mlx;
	return 0;
}

int	main(int ac, char **av)
{
	t_mlx mlx;
	t_map *map;
	if (ac != 2)
		return (1);
	map = manage_fd(av[1]);
	mlx.mlx_ptr = mlx_init();
//	mlx.win_ptr = mlx_new_window(mlx.mlx_ptr, map->map_width, map->map_height, "NEW WINDOW");
	mlx.win_ptr = mlx_new_window(mlx.mlx_ptr, WINDOW_WIDTH, WINDOW_HEIGHT, "NEW WINDOW");
//	map_creation(*av);
	put_player(mlx);
	//put_wall(mlx);
//	mlx_key_hook(mlx.win_ptr, count_moves, (void *)0);
//	mlx_key_hook(mlx.win_ptr, going_forward, (void *)0);
	mlx_key_hook(mlx.win_ptr, key_hooks, (void *)0);
	mlx_hook(mlx.win_ptr, 2, 1L, key_hooks, &mlx);
	mlx_hook(mlx.win_ptr, 17, 0, close_window, NULL);
	mlx_loop(mlx.mlx_ptr);
	return (0);
}
