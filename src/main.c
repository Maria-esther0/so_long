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

int close_window(void)
{
	ft_printf("game closed successfully\n");
	exit(0);
}

void	manage_image(t_mlx mlx)
{
	mlx.x = 200;
	mlx.y = 200;
	mlx.img_width = 0;
	mlx.img_width = 0;
	mlx.img_path = "./img/character_from_side.xpm";
	mlx.img = mlx_xpm_file_to_image(mlx.mlx_ptr, mlx.img_path, &mlx.img_width, &mlx.img_height);
	mlx_put_image_to_window(mlx.mlx_ptr, mlx.win_ptr, mlx.img, mlx.x, mlx.y);
}

int	key_hooks(int key, t_mlx *mlx)
{
	if (key == K_ESC)
		close_window();
	else if (key == K_W)
		ft_printf("Pressed W\n");
	else if (key == K_S)
		ft_printf("Pressed S\n");
	else if (key == K_A)
		ft_printf("Pressed A\n");
	else if (key == K_D)
		ft_printf("Pressed D\n");
	else if (key == K_UP)
		ft_printf("Pressed Up key\n");
	else if (key == K_DOWN)
		ft_printf("Pressed Down key\n");
	else if (key == K_LEFT)
		ft_printf("Pressed Left key\n");
	else if (key == K_RIGHT)
		ft_printf("Pressed Right key\n");
	(void)mlx;
	return 0;
}

int manage_fd(char *av)
{
	int		fd;
//	char	*output;

	fd = open(av, O_RDONLY);
	if (fd == -1)
		return (0);
	close(fd);
	return (1);
}

int map_is_valid(char *file)
{
	int lenght;

	lenght = (int)ft_strlen(file);
	return (lenght > 4 &&)
}

//int	manage_fd(char *av)
//{
//	int		i;
//	int		fd;
//	char	*output;
//
//	i = 0;
//	fd = open(av, O_RDONLY);
//	output = get_next_line(fd);
//	while (output[i++])
//		printf("%c", output[i]);
//	return (0);
//}

int	going_forward(t_mlx mlx, int y, int x)
{

}

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	manage_fd(argv[1]);
	t_mlx mlx;
	mlx.mlx_ptr = mlx_init();
	mlx.win_ptr = mlx_new_window(mlx.mlx_ptr, WINDOW_WIDTH, WINDOW_HEIGHT, "NEW WINDOW");
	manage_image(mlx);
//	mlx_key_hook(mlx.win_ptr, count_moves, (void *)0);
	mlx_key_hook(mlx.win_ptr, going_forward, (void *)0)
	mlx_key_hook(mlx.win_ptr, key_hooks, (void *)0);
	mlx_hook(mlx.win_ptr, 2, 1L, key_hooks, &mlx);
	mlx_hook(mlx.win_ptr, 17, 0, close_window, NULL);
	mlx_loop(mlx.mlx_ptr);
	return (0);
}

