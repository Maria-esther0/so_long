/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_hook.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillarr <mvillarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 17:06:51 by mvillarr          #+#    #+#             */
/*   Updated: 2023/06/24 20:11:20 by mvillarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	key_hooks(int key, t_scene *sc)
{
	if (key == K_ESC)
		close_window(sc);
	else if (key == K_W)
		move(sc, 0, -1);
	else if (key == K_S)
		move(sc, 0, 1);
	else if (key == K_A)
		move(sc, -1, 0);
	if (key == K_D)
		move(sc, 1, 0);
	return (0);
}

int	check_wall(t_scene *sc)
{
	int	i;

	i = sc->map_width;
	while (i--)
	{
		if (sc->data[0][i] != '1' || sc->data[sc->map_height - 1][i] != '1')
			return (0);
	}
	i = sc->map_height;
	while (i--)
	{
		if (sc->data[i][0] != '1' || sc->data[i][sc->map_width - 1] != '1')
			return (0);
	}
	return (1);
}

int	item_check(t_scene *sc)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (sc->data[i] != NULL)
	{
		while (sc->data[i][j] != '\0')
		{
			if (sc->data[i][j] != '1' && sc->data[i][j] != '0'
				&& sc->data[i][j] != 'P' && sc->data[i][j] != 'C'
				&& sc->data[i][j] != 'E' && sc->data[i][j] != '\n'
				&& sc->data[i][j] != '\r')
			{
				ft_printf("\n\nsc->data[%d][%d] : %d\n\n", i, j, sc->data[i][j]);
				return (0);
			}
			j++;
		}
		i++;
		j = 0;
	}
	return (1);
}

int	check_map_name(int av_size, char **av)
{
	int	result;

	result = 0;
	if (av[1][av_size - 4] != '.')
		result = 1;
	else if (av[1][av_size - 3] != 'b')
		result = 1;
	else if (av[1][av_size - 2] != 'e')
		result = 1;
	else if (av[1][av_size - 1] != 'r')
		result = 1;
	return (result);
}
