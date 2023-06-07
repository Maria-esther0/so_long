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

// definition des touches
# define K_ESC 53
# define K_UP 126
# define K_DOWN 125
# define K_LEFT 123
# define K_RIGHT 124
# define K_W 13
# define K_S 1
# define K_A 0
# define K_D 2

// definition des paths des images xpm
# define CAPYBARA "./img/capy_64.xpm"
# define COIN "./img/coin_64.xpm"
# define GRASS "./img/grass_64.xpm"
# define DIRT "./img/dirt_64.xpm"
# define DOOR "./img/open_door_64.xpm"

// includes & paths
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
	int 	y;
	int 	x;
}	t_mlx;

typedef struct s_img
{
	void	*img_ptr;
	int		img_width;
	int		img_height;
	void	*img;
	int 	player;
	int 	coin;
	int 	grass;
	int 	dirt;
	int 	lignes;
	char	*img_path;
	t_mlx	game;
}	t_img;

typedef struct s_map
{
	t_mlx	map;
//	void	player;
	int 	x_player;
	int 	y_player;
	int 	map_width;
	int 	map_height;
	char	*name;
	char	**data;
}	t_map;

// map functions
t_map	*init_map(int fd, char *av);
//int	map_check(char *name);
int	read_map(t_map **m, char *av);
//int		check_map_name(char *av);
//int		map_is_valid(char *file);
int 	map_height(int fd);
int 	map_width(int fd);
t_map		*manage_fd(char *av);

// window functions
int		close_window(void);

// drawing functions
void	draw_map(t_map *map, t_mlx *mlx);
void	put_grass(t_mlx *mlx, int w, int h);
void	img_init(t_img *img);
void	draw_dirt(t_mlx *mlx, int w, int h);
void	put_coin(t_mlx *mlx, int w, int h);
void	put_door(t_mlx *mlx, int i, int j);
void	load_frames(t_mlx *mlx, char **frames, int num_frames, void **dest);
void	load_img(t_mlx *mlx, t_img *img);

// player functions
void	put_player(t_mlx *mlx, int x, int y);
void	player_move(t_map *map, int x, int y);
void	movement(t_map *map, int new_x, int new_y);

// hook functions
int		key_hooks(int key, t_mlx *mlx);

// other utils
int		ft_strcmp(char *str1, char *str2);
void	ft_free(char **tab);
void	exit_error(const char *error_msg);
int		count_moves(void);

#endif