/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillarr <mvillarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 15:29:15 by mvillarr          #+#    #+#             */
/*   Updated: 2023/06/24 19:02:30 by mvillarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	map_check(char *name, t_scene map)
{
//	if (!there_is_a_map(name))
//	{
//		ft_printf("\nNo map found\n");
//		return (0);
//	}
	(void)name;
	if (!map_is_rectangle(&map))
	{
		ft_printf("\nMap is not valid: not rectangular map!\n");
		return (0);
	}
	else if (!check_wall(&map))
	{
		ft_printf("\nMap does not have valid walls\n");
		return (0);
	}
	return (1);
}

int check_args(int ac, char **av)
{
	int av_size;

	av_size = 0;
	if (ac != 2)
	{
		printf("Usage: %s <path/to/map.ber>\n", av[0]);
		exit (0);
	}
	while (av[1][av_size] != '\0')
		av_size++;
	if (check_map_name(av_size, av) == 1)
	{
		ft_printf("\nMap does not end with '.ber'\n");
		exit (0);
	}
	return (0);
}

//fonction works
int	map_is_rectangle(t_scene *sc)
{
	int	line;
	int i;
	int j;

	line = sc->map_width;
	i = 1;
	while (i < sc->map_height)
	{
		j = 0;
		while (sc->data[i][j] != '\n' && sc->data[i][j])
			j++;
		if (j != line)
			return (0);
		i++;
	}
	return (1);
}

//int is_file_empty(char *av)
//{
//	int		fd;
//	char	buffer[1];
//
//	fd = open(av, O_RDONLY);
//	if (fd == -1)
//	{
//		printf("File could not be opened\n");
//		exit(1);
//	}
//	ssize_t bytes_read = read(fd, buffer, sizeof(buffer));
//	close(fd);
//	if (bytes_read == 0)
//		return 1;
//	else
//		return 0;
//}
////fonction does not work
//int	there_is_a_map(char	*av)
//{
//	int fd;
//
//	fd = open(av, O_RDONLY);
//	if (fd == -1)
//		return (0);
//	close(fd);
//	if (ft_strlen(av) != 0)
//		return (0);
//	return (1);
//}

int check_map_name(int av_size, char **av)
{
	int result;

	result = 0;
	if (av[1][av_size - 4] != '.')
		result = 1;
	else if (av[1][av_size - 3] != 'b')
		result = 1;
	else if (av[1][av_size - 2] != 'e')
		result = 1;
	else if (av[1][av_size - 1] != 'r')
		result = 1;
	return (result);
}

int	check_wall(t_scene *sc)
{
	int	i;

	i = sc->map_width;
	while (i--)
	{
		if (sc->data[0][i] != '1' || sc->data[sc->map_height - 1][i] != '1')
			return (0);
	}
	i = sc->map_height;
	while (i--)
	{
		if (sc->data[i][0] != '1' || sc->data[i][sc->map_width - 1] != '1')
			return (0);
	}
	return (1);
}

int item_check(t_scene *sc) //todo
{
	if (sc->coin == sc->nbr_coins)
		return (1);
	return (0);
}
