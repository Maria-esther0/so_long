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

int 	key_hooks(int key, t_scene *sc)
{
	if (key == K_ESC)
		close_window();
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
