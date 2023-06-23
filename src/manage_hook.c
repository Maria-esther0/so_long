/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_hook.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillarr <mvillarr@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 17:06:51 by mvillarr          #+#    #+#             */
/*   Updated: 2023/05/26 17:07:22 by mvillarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int 	key_hooks(int key, t_map *map)
{
	key_process(key, map);
	return (0);
}

int	key_process(int key, t_map *map)
{
//	int i = 0;

	if (key == K_ESC)
		close_window();
	else if (key == K_W)
	{
		move(map, 0, -1);
		ft_printf("Pressed W\n");
	}
	else if (key == K_S)
	{
		move(map, 0, 1);
		ft_printf("Pressed S\n");
	}
	else if (key == K_A)
	{
		move(map, -1, 0);
		ft_printf("Pressed A\n");
	}
	if (key == K_D)
	{
		move(map, 1, 0);
		ft_printf("Pressed D\n");
	}
	return (0);
}

