/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillarr <mvillarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:18:46 by mvillarr          #+#    #+#             */
/*   Updated: 2023/06/24 19:41:29 by mvillarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"



int	get_w_h_map(int fd, t_scene *sc)
{
	char *tmp;

	tmp = get_next_line(fd);
	sc->map_width = ft_strlen(tmp + 1);
	while (tmp)
	{
		free(tmp);
		tmp = NULL;
		tmp = get_next_line(fd);
		sc->map_height++;
	}
	free(tmp);
	tmp = NULL;
	return (0);
}

int	read_map(t_scene *sc, char *av)
{
	int		i;
	int		fd;

	fd = open(av, O_RDONLY);
	if (fd == -1)
	{
		perror("Couldn't open file\n");
		exit(EXIT_FAILURE);
	}
	i = 0;
	sc->data = (char **)ft_calloc(sizeof(char), (sc->map_width) * (sc->map_height));
	while (i < sc->map_height)
	{
		sc->data[i] = get_next_line(fd);
//		ft_printf("Map : %s", sc->data[i]);
		i++;
	}
	return (0);
}

void init_map(int fd, char	*av, t_scene *sc)
{
	(void)av;

	sc->map_width = 0;
	sc->map_height = 0;
	get_w_h_map(fd, sc);
}

void	manage_fd(char *av, t_scene *sc)
{
	int		fd;

	fd = open(av, O_RDONLY);
	if (fd == -1)
	{
		perror("Found Error in file\n");
		exit(EXIT_FAILURE);
	}
	init_map(fd, av, sc);
	close(fd);
	read_map(sc, av);
}
