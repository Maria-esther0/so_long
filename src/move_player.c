/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_player.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillarr <mvillarr@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:19:06 by mvillarr          #+#    #+#             */
/*   Updated: 2023/05/15 15:19:07 by mvillarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	update_player_position(int new_x, int new_y, t_map *map)
{
	map->data[map->y_player][map->x_player] = '0';
	map->x_player += new_x;
	map->y_player += new_y;
	map->data[map->y_player][map->x_player] = 'P';
}

void	collect_coins(t_map *map, char next, int pos_x, int pos_y)
{
	(void)pos_x;
	(void)pos_y;

	if (next == 'C')
	{
		map->nbr_coins ++;
//		ft_printf("y_player %d + pos_y %d = %d\n", map->y_player, pos_y, map->y_player + pos_y);
//		ft_printf("x_player %d + pos_x %d = %d\n", map->x_player, pos_x, map->x_player + pos_x);
		map->data[map->y_player + pos_y][map->x_player + pos_x] = '0';
		ft_printf("you collected %d coins!\n", map->nbr_coins);
//		ft_printf("%c - ", map->data[1][0]);
//		ft_printf("%c - ", map->data[1][1]);
//		ft_printf("%c - ", map->data[1][2]); //?
//		ft_printf("%c - ", map->data[1][3]); //?
//		ft_printf("%c - ", map->data[1][4]);
//		ft_printf("%c - ", map->data[1][5]);
//		ft_printf("%c - ", map->data[1][6]);
//		ft_printf("%c - ", map->data[1][7]);
	}
}

void	move(t_map *map, int pos_x, int pos_y)
{
	char	next;
	t_img	img;

	next = map->data[map->y_player + pos_y][map->x_player + pos_x];
	if (next == '0' || next == 'C' || next != '1')
	{
		collect_coins(map, next, pos_x, pos_y);
		map->player = mlx_xpm_file_to_image(map->map.mlx_ptr, CAPYBARA,
					&img.img_width, &img.img_height);
		mlx_put_image_to_window(map->map.mlx_ptr, map->map.win_ptr,
					map->player, (map->x_player + pos_x) * 64, (map->y_player + pos_y) * 64);
		map->grass = mlx_xpm_file_to_image(map->map.mlx_ptr, GRASS,
					&img.img_width, &img.img_height);
		mlx_put_image_to_window(map->map.mlx_ptr, map->map.win_ptr,
								map->grass,  64 * (map->x_player), 64 * (map->y_player));
		update_player_position(pos_x, pos_y, map);
//		map->nbr_steps++;
	}
	exit_move(map, next);
}

int count_moves(void)
{
	static int mv;

	if (!mv)
		return (0);
	while (mv)
		mv++;
	ft_printf("mv %d\n", mv);
	return (0);
}

void	player_pos(t_map *map)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (map->data[i])
	{
		while (map->data[i][j])
		{
			if (map->data[i][j] == 'P')
			{
				map->x_player = j;
				map->y_player = i;
				return ;
			}
			j++;
		}
		i++;
		j = 0;
	}
}

void	exit_move(t_map *map, char next)
{
	if (next == 'E')
	{
		if (item_check(map) == 0)
		 	ft_printf("Steps made: %d\n", map->nbr_steps);
		close_window();
	}
}
