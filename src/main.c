/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillarr <mvillarr@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 15:10:12 by mvillarr          #+#    #+#             */
/*   Updated: 2023/04/28 15:10:14 by mvillarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"


//int	main(void)
//{
//	void	*mlx_ptr;
//	void	*win_ptr;
//	mlx_ptr = mlx_init();
//	win_ptr = mlx_new_window(mlx_ptr, 400, 700, "mlx_example");
//	mlx_loop(mlx_ptr);
//}


int	main(void)
{
	void	*mlx_ptr;

	mlx_ptr = mlx_init();
	mlx_new_window(mlx_ptr, 700, 500, "mlx_example");
	mlx_loop(mlx_ptr);
}