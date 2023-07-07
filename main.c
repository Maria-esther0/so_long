#include <mlx.h>
#include <stdio.h>


int	main(void)
{
	void	*mlx;
	void	*img;
	char	*relative_path = "./200x200.xpm";
	int		img_width;
	int		img_height;

	mlx = mlx_init();
	mlx = mlx_new_window(mlx, 800, 800, "NEW WINDOW");
	printf("img before: %p\n", img);
	img = mlx_xpm_file_to_image(mlx, relative_path, &img_width, &img_height);
	printf("img after: %p\n", img);
	mlx_loop(mlx);
}
