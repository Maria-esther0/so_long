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
#define SO_LONG_H

# define WINDOW_WIDTH 700
# define WINDOW_HEIGHT 500

# include <math.h>
# include <string.h>
# include <stdlib.h>
# include "../mlx/mlx.h"
# include "../src/LIBFT/ft_libft/libft.h"
# include "../src/LIBFT/libftprintf/ft_printf.h"

typedef struct s_mlx
{
	void	*mlx_ptr;
	void 	*win_ptr;
	void	*param;
	int 	y;
	int 	x;
	int 	color;
	int 	button;
	int 	close;
}	t_mlx;

#endif