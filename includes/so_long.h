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

// definition de la resolution de mes images
# define WINDOW_WIDTH 500
# define WINDOW_HEIGHT 400

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

// taille des images
# define IMG_SIZE 	32

// definition des paths des sprints, el path tiene que estar escrito de la
// siguiente manera con un punto al comienzo sino hace errores raros que no entiendo
# define WOODEN_FLOOR "./img/wooden.xpm"
# define STILL_CAT "./img/still_cat.xpm"
# define JUMPING_CAT "./img/jumping_cat.xpm"
# define STANDING_CAT "./img/standing_cat.xpm"
# define MOVING_CAT "./img/moving_cat.xmp"
# define GRASS "./img/grass.xpm"

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
	void	*wooden_floor;
	void	*still_cat;
	void	*jumping_cat;
	void	*standing_cat;
	void	*moving_cat;
	int 	lignes;
	char	*img_path;
	t_mlx	game;
}	t_img;

typedef struct s_map
{
	t_mlx	map;
	int 	map_width;
	int 	map_height;
	char	*name;
	char	**data;
}	t_map;

// map functions
int	map_check(char *name);
t_map	map_creation(char *av);
int		set_map_size(t_map *map, char *av);
int		set_map_data(t_map *map, char *av);
char	**read_map(int fd);
int		check_map_name(char *av);
int		map_is_valid(char *file);
int 	map_height(char *map_fd);
int 	map_width(char *av);
t_map		*manage_fd(char *av);
void	put_wall(t_mlx mlx);

// window functions
int		close_window(void);


int		count_moves(void);

// player functions
void	put_player(t_mlx mlx);

// hooks functions
int		key_hooks(int key, t_mlx *mlx);

// other utils
int		ft_strcmp(char *str1, char *str2);
//int		going_forward(int key, t_mlx mlx);
void	ft_free(char **tab);
void	exit_error(const char *error_msg);

#endif