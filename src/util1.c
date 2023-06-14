/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillarr <mvillarr@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 16:11:01 by mvillarr          #+#    #+#             */
/*   Updated: 2023/05/12 16:11:03 by mvillarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

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

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while ((str1[i] != '\0' && str2[i] != '\0') && (str1[i] == str2[i]))
		i++;
	return (str1[i] - str2[i]);
}

void	exit_error(const char *error_msg)
{
	perror(error_msg);
	exit(1);
}

//int map_height(int fd)
//{
//	int lines;
//	char *tmp;
//
//	lines = 0;
//	tmp = get_next_line(fd);
//	while (tmp)
//	{
//		free(tmp);
//		tmp = get_next_line(fd);
//		lines++;
//	}
//	return (lines);
//}

//int map_width(int fd)
//{
//	int 	width;
//	char	*ligne;
//
//	width = 0;
//	ligne = get_next_line(fd);
//	width = (int)ft_strlen(ligne);
//	free (ligne);
//	close(fd);
//	return (width);
//}

void	put_img(t_map *map, int x, int y, void *img)
{
	mlx_put_image_to_window(map->map.mlx_ptr, map->map.win_ptr, img, x, y);
}
