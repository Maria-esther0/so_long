/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillarr <mvillarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 14:21:09 by mvillarr          #+#    #+#             */
/*   Updated: 2023/06/24 20:11:54 by mvillarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	free_the_map(t_scene	*sc)
{
	int	i;

	i = 0;
	if (!sc)
		return ;
	if (sc->data)
	{
		while (i < sc->map_height && sc->data[i] != NULL)
		{
			free(sc->data[i]);
			sc->data[i] = NULL;
			i++;
		}
		free(sc->data);
		sc->data = NULL;
	}
	sc = NULL;
}

int	close_window(t_scene *sc)
{
	free_the_map(sc);
	ft_printf("Game closed successfully!\n");
	exit (0);
}

void	fill(char **tmp_map, t_point size, t_point cur, char to_fill)
{
	to_fill = '0';
	if (cur.x < 0 || cur.x >= size.x || cur.y < 0 || cur.y >= size.y
		|| (tmp_map[cur.y][cur.x] != to_fill && tmp_map[cur.y][cur.x] != 'C'
			&& tmp_map[cur.y][cur.x] != 'E' && tmp_map[cur.y][cur.x] != 'P'))
		return ;
	tmp_map[cur.y][cur.x] = 'F';
	fill(tmp_map, size, (t_point){cur.x - 1, cur.y}, to_fill);
	fill(tmp_map, size, (t_point){cur.x + 1, cur.y}, to_fill);
	fill(tmp_map, size, (t_point){cur.x, cur.y - 1}, to_fill);
	fill(tmp_map, size, (t_point){cur.x, cur.y + 1}, to_fill);
}

void	flood_fill(char **tmp_map, t_point size, t_point begin)
{
	fill(tmp_map, size, begin, tmp_map[begin.y][begin.x]);
}

void	free_tmp(char **tmp, int map_height)
{
	int	i;

	i = -1;
	while (++i < map_height)
		free(tmp[i]);
	free(tmp);
}
