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
	int 	lignes;
	char	*img_path;
	t_mlx	game;
}	t_img;

typedef struct s_map
{
	t_mlx	map;
	void	*player;
	void	*coin;
	void	*grass;
	void	*dirt;
	void	*door;
	void 	*nbr_coins;
	int 	nbr_steps;
	int 	x_player;
	int 	y_player;
	int 	map_width;
	int 	map_height;
	char	*name;
	char	**data;
}	t_map;

// map functions
t_map	*init_map(int fd, char *av);
t_map	*manage_fd(char *av);
int		read_map(t_map **m, char *av);

// window functions
int		close_window(void);

// moving funcions
void	move(t_map *map, int pos_y, int pos_x);
void	exit_move(t_map *map, char next);
void	player_pos(t_map *map);

// drawing functions
void	draw_map(t_map *map, t_mlx *mlx);
void	put_grass(t_mlx *mlx, int w, int h);
void	put_dirt(t_mlx *mlx, int w, int h);
void	put_coin(t_mlx *mlx, int w, int h);
void	put_door(t_mlx *mlx, int w, int h);
void	put_img(t_map *map, int x, int y, void *img);

// P/C/1/0/E functions
void	put_player(t_mlx *mlx, int x, int y);
int		item_check(t_map *map);

// hook functions
int		key_hooks(int key, t_map *map);

// other utils
int		ft_strcmp(char *str1, char *str2);
void	ft_free(char **tab);
void	exit_error(const char *error_msg);
int		count_moves(void);

#endif
