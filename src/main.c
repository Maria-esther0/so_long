/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillarr <mvillarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 15:10:12 by mvillarr          #+#    #+#             */
/*   Updated: 2023/06/29 15:06:50 by mvillarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	close_window(t_scene *sc)
{
	free_the_map(sc);
	ft_printf("\nGame closed successfully!\n");
	exit (0);
}

int	init_game(t_scene *sc)
{
	sc->y_player = 0;
	sc->x_player = 0;
	sc->mlx.mlx_ptr = mlx_init();
	sc->mlx.win_ptr = mlx_new_window(sc->mlx.mlx_ptr, sc->map_width * 64,
			sc->map_height * 64, "mvillarr's so_long");
	return (0);
}

int	main(int ac, char **av)
{
	t_scene	sc;

	check_args(ac, av);
	manage_fd(av[1], &sc);
	if (!sc.data)
	{
		printf("error in map\n");
		return (1);
	}
	init_game(&sc);
	init_atlas(&sc);
	if (!map_check(av[1], sc))
		exit (0);
	draw_map(&sc, &sc.mlx);
	player_pos(&sc);
	sc.nbr_coins = 0;
	sc.nbr_steps = 1;
	mlx_key_hook(sc.mlx.win_ptr, key_hooks, &sc);
	mlx_hook(sc.mlx.win_ptr, 17, 1L << 17, close_window, &sc);
	mlx_loop(sc.mlx.mlx_ptr);
	return (0);
}
