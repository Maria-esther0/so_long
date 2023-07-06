/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillarr <mvillarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 14:30:20 by mvillarr          #+#    #+#             */
/*   Updated: 2023/06/24 19:37:18 by mvillarr         ###   ########.fr       */
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
# include "../src/libft/get_next_line/get_next_line_bonus.h"

typedef struct s_mlx
{
	void	*mlx_ptr;
	void	*win_ptr;
	int		y;
	int		x;
}	t_mlx;

typedef struct s_img
{
	void	*mlx_img;
	int		width;
	int		height;
	char	*img_path;
}	t_img;

typedef struct s_atlas
{
	t_img	player;
	t_img	coin;
	t_img	grass;
	t_img	dirt;
	t_img	door;
}	t_atlas;

typedef struct s_point
{
	int	x;
	int	y;
}	t_point;

typedef struct s_scene
{
	t_mlx	mlx;
	t_atlas	atlas;
	char	*name;
	void	*coin;
	void	*nbr_coins;
	int		nbr_steps;
	int		x_player;
	int		y_player;
	int		map_width;
	int		map_height;
	char	**data;
}	t_scene;

// map functions
void	init_map(int fd, char	*av, t_scene *sc);
int		init_game(t_scene *sc);
void	manage_fd(char *av, t_scene *sc);
int		read_map(t_scene *m, char *av);

// atlas functions
void	init_atlas(t_scene *sc);

// check functions
int		check_map_name(int av_size, char **av);
int		map_is_rectangle(t_scene *sc);
int		map_check(char *name, t_scene map);
int		check_wall(t_scene *sc);
int		check_args(int ac, char **av);
int		file_is_empty(char *av);
int		check_fct(t_scene map);
void	fill(char **tab, t_point size, t_point cur, char to_fill);
void	flood_fill(char **tab, t_point size, t_point begin);

// window functions
int		close_window(t_scene *sc);
void	free_the_map(t_scene	*sc);

// moving funcions
void	move(t_scene *sc, int pos_x, int pos_y);
void	player_pos(t_scene *sc);
void	update_player_position(int new_x, int new_y, t_scene *sc);
void	collect_coins(t_scene *sc, char next, int pos_x, int pos_y);

// drawing functions
void	draw_map(t_scene *sc, t_mlx *mlx);
void	put_img_to_window(t_mlx *mlx, t_img *img, int w, int h);

// P/C/1/0/E functions
int		item_check(t_scene *sc);

// hook functions
int		key_hooks(int key, t_scene *sc);

// other utils
void	ft_free(char **tab);

#endif
