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

//int	key_hooks(int key, t_map *map)
//{
//	player_pos(map);
//	ft_printf("player's position x = %d\n", map->x_player);
//	ft_printf("player's position y = %d\n", map->y_player);
//	if (key == K_ESC)
//		close_window();
//	else if (key == K_W)
//		ft_printf("Pressed W\n");
//	else if (key == K_S)
//		ft_printf("Pressed S\n");
//	else if (key == K_A)
//		ft_printf("Pressed A\n");
//	else if (key == K_D)
//		ft_printf("Pressed D\n");
//	return 0;
//}

int 	key_hooks(int key, t_map *map)
{
	key_process(key, map);
	return (0);
}

int	key_process(int key, t_map *map)
{
	if (key == K_ESC)
		close_window();
	else if (key == K_W)
	{
	 	move(map, 0, map->y_player--);
		ft_printf("Pressed W\n");
	}
	else if (key == K_S)
	{
		move(map, 0, map->y_player++);
		ft_printf("Pressed S\n");
	}
	else if (key == K_A)
	{
		move(map, map->x_player--, 0);
		ft_printf("Pressed A\n");
	}
	if (key == K_D)
	{
		move(map, map->x_player++, 0);
		ft_printf("Pressed D\n");
	}
	return (0);
}
