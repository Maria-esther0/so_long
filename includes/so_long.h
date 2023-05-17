/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillarr <mvillarr@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 14:30:20 by mvillarr          #+#    #+#             */
/*   Updated: 2023/04/28 14:30:22 by mvillarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# define WINDOW_WIDTH 500
# define WINDOW_HEIGHT 400

# define K_ESC 53
# define K_UP 126
# define K_DOWN 125
# define K_LEFT 123
# define K_RIGHT 124
# define K_W 13
# define K_S 1
# define K_A 0
# define K_D 2

# include <fcntl.h>
# include <math.h>
# include <string.h>
# include <stdlib.h>
# include "../mlx/mlx.h"
# include "../src/libft/libft.h"
# include "../src/libft/printf/ft_printf.h"
# include "../src/libft/get_next_line/get_next_line.h"

typedef struct s_mlx
{
	void	*mlx_ptr;
	void	*win_ptr;
	void	*param;
	int		y;
	int		x;
	char	**map;
	int		color;
	int		button;
	int		close;
}	t_mlx;

typedef struct s_img
{
	void	*img_ptr;
	int		img_width;
	int		img_height;
	void	*img;
	int 	lignes;
	char	*img_path;
	t_mlx	game;
}	t_img;

typedef struct s_map
{
	t_img	img;
	t_img	**img_params;
	t_mlx	map;
	char	*name;
	char	*path;
}	t_map;

int		close_window(void);
int		count_moves(void);
void	put_player(t_mlx mlx);
int		key_hooks(int key, t_mlx *mlx);
int		manage_fd(char *av);
int		ft_strcmp(char *str1, char *str2);
int		map_is_valid(char *file);
//int		going_forward(int key, t_mlx mlx);
void	put_wall(t_mlx mlx);
int		check_map(char *av);

#endif