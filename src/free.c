/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillarr <mvillarr@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 14:21:09 by mvillarr          #+#    #+#             */
/*   Updated: 2023/05/20 14:21:11 by mvillarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/so_long.h"

void	free_the_map(t_map	*map)
{
	int	i;

	i = 0;
	if (!map)
		return;
	if (map->data)
	{
		while (i < map->map_height)
		{
			free(map->data[i]);
			map->data[i] = NULL;
			i++;
		}
		free(map->data);
		map->data = NULL;
	}
	if (map->name)
	{
		free(map->name);
		map->name = NULL;
	}
	free(map);
	map = NULL;
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

