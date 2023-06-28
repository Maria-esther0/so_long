/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_player.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillarr <mvillarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:19:06 by mvillarr          #+#    #+#             */
/*   Updated: 2023/06/24 20:11:18 by mvillarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	has_coin_left(t_scene *sc)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (sc->data[i])
	{
		while (sc->data[i][j])
		{
			if (sc->data[i][j] == 'C')
			{
				ft_printf("There's still some coins on the map !\n");
				return (1);
			}
			j++;
		}
		i++;
		j = 0;
	}
	return (0);
}


void	update_player_position(int new_x, int new_y, t_scene *sc)
{
	sc->data[sc->y_player][sc->x_player] = '0';
	sc->x_player += new_x;
	sc->y_player += new_y;
	sc->data[sc->y_player][sc->x_player] = 'P';
}

void	collect_coins(t_scene *sc, char next, int pos_x, int pos_y)
{
	if (next == 'C')
	{
		sc->nbr_coins++;
		sc->data[sc->y_player + pos_y][sc->x_player + pos_x] = '0';
		ft_printf("you collected %d coins!\n", sc->nbr_coins);
	}
}

void	move(t_scene *sc, int pos_x, int pos_y)
{
	char	next;

	next = sc->data[sc->y_player + pos_y][sc->x_player + pos_x];
	if (next == '0' || next == 'C')
	{
		sc->nbr_steps++;
		collect_coins(sc, next, pos_x, pos_y);
		put_img_to_window(&sc->mlx, &sc->atlas.player, (sc->x_player + pos_x), (sc->y_player + pos_y));
		put_img_to_window(&sc->mlx, &sc->atlas.grass, (sc->x_player), (sc->y_player));
		update_player_position(pos_x, pos_y, sc);
	}
	else if (next == 'E')
	{
		if (has_coin_left(sc))
			return ;
//		ft_printf("steps made: %d", sc->nbr_steps);
		close_window(sc);
	}
}

void	player_pos(t_scene *sc)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (sc->data[i])
	{
		while (sc->data[i][j])
		{
			if (sc->data[i][j] == 'P')
			{
				sc->x_player = j;
				sc->y_player = i;
				return ;
			}
			j++;
		}
		i++;
		j = 0;
	}
}
