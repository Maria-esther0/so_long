/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillarr <mvillarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 15:29:15 by mvillarr          #+#    #+#             */
/*   Updated: 2023/06/26 20:17:36 by mvillarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	map_check(char *name, t_scene map)
{
	int	fd;

	fd = open(name, O_RDONLY);
	if (fd == -1)
	{
		ft_printf("\nFile does not exist\n");
		return (0);
	}
	if (!file_is_empty(name))
	{
		ft_printf("\nFile is empty!\n");
		return (0);
	}
	if (check_fct(map))
		return (0);
	return (1);
}

int	check_fct(t_scene map)
{
	if (!map_is_rectangle(&map))
	{
		ft_printf("\nMap is not valid: not rectangular map!\n");
		return (1);
	}
	else if (!check_wall(&map))
	{
		ft_printf("\nMap does not have valid walls\n");
		return (1);
	}
	else if (!item_check(&map))
	{
		ft_printf("\nMap doesnt have the right items0000\n");
		return (1);
	}
	return (0);
}

int	file_is_empty(char *av)
{
	char	*line;
	int		fd;

	fd = open(av, O_RDONLY);
	if (fd == -1)
		return (1);
	line = get_next_line_b(fd);
	close(fd);
	if (line == NULL)
		return (0);
	free(line);
	return (1);
}

int	check_args(int ac, char **av)
{
	int	av_size;

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
	int	i;
	int	j;

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
