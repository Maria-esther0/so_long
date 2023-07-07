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

int	init_game(t_scene *sc)
{
	sc->y_player = 0;
	sc->x_player = 0;
	sc->mlx.mlx_ptr = mlx_init();
	sc->mlx.win_ptr = mlx_new_window(sc->mlx.mlx_ptr, sc->map_width * 64,
			sc->map_height * 64, "mvillarr's so_long");
	return (0);
}

void	check_end(t_point end, char **tmp, t_scene *sc)
{
	if (!end.y || !end.x)
	{
		ft_printf("Error on the exit of the map!\n");
		exit(1);
	}
	else if (end.x || end.y)
		flood_fill(tmp, (t_point){sc->map_width, sc->map_height},
			(t_point){sc->x_player, sc->y_player});
}

void	validate_map(t_scene *sc, char **tmp)
{
	int		path_valid;
	int		i;
	t_point	end;

	i = -1;
	while (++i < sc->map_height)
		tmp[i] = ft_strdup(sc->data[i]);
	end = find_position(sc, 'E');
	check_end(end, tmp, sc);
	path_valid = (tmp[end.x][end.y] == 'F');
	i = -1;
	while (++i < sc->map_height)
		free(tmp[i]);
	free(tmp);
	if (!path_valid)
	{
		ft_printf("Map not valid!\n");
		exit(1);
	}
}

void	setup_game(t_scene *sc, char **av, int ac)
{
	char	**tmp;

	check_args(ac, av);
	manage_fd(av[1], sc);
	if (!sc->data)
	{
		ft_printf("Error in map!\n");
		exit(1);
	}
	init_game(sc);
	init_atlas(sc);
	if (!map_check(av[1], *sc))
		exit(0);
	draw_map(sc, &sc->mlx);
	player_pos(sc);
	sc->nbr_coins = 0;
	sc->nbr_steps = 1;
	tmp = malloc(sizeof(char *) * sc->map_height);
	if (!tmp)
		exit(1);
	validate_map(sc, tmp);
}

int	main(int ac, char **av)
{
	t_scene	sc;

	setup_game(&sc, av, ac);
	mlx_key_hook(sc.mlx.win_ptr, key_hooks, &sc);
	mlx_hook(sc.mlx.win_ptr, 17, 1L << 17, close_window, &sc);
	mlx_loop(sc.mlx.mlx_ptr);
	return (0);
}
