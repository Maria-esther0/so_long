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

# include "../includes/so_long.h"

void	free_the_map(t_scene	*sc)
{
	int	i;

	i = 0;
	if (!sc)
		return;
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
//	if (sc->name)
//	{
//		free(sc->name);
//		sc->name = NULL;
//	}
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

