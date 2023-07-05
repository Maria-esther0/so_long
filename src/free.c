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

void	ft_free(char **tab)
{
	size_t	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	tab = NULL;
	return ;
}

void	fill(char **tab, t_mlx size, t_mlx cur, char to_fill)
{
	to_fill = '0';
	if (cur.y < 0 || cur.y >= size.y || cur.x < 0 || cur.x >= size.x
		|| (tab[cur.y][cur.x] != to_fill && tab[cur.y][cur.x] != 'C'
		&& tab[cur.y][cur.x] != 'E' && tab[cur.y][cur.x] != 'P'))
		return;
	tab[cur.y][cur.x] = 'F';
	fill(tab, size, (t_mlx){cur.x - 1, cur.y}, to_fill);
	fill(tab, size, (t_mlx){cur.x + 1, cur.y}, to_fill);
	fill(tab, size, (t_mlx){cur.x, cur.y - 1}, to_fill);
	fill(tab, size, (t_mlx){cur.x, cur.y + 1}, to_fill);
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	fill(tab, size, begin, tab[begin.y][begin.x]);
}
