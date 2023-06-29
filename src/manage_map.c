/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillarr <mvillarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:18:46 by mvillarr          #+#    #+#             */
/*   Updated: 2023/06/29 14:49:03 by kdi-noce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

//possible leak ligne 27
int	get_w_h_map(int fd, t_scene *sc)
{
	char *tmp;

	tmp = get_next_line_b(fd);
	if (!tmp)
		return (1);
	sc->map_width = ft_strlen(tmp + 1);
	while (tmp)
	{
		free(tmp);
		tmp = NULL;
		tmp = get_next_line_b(fd);
		sc->map_height++;
	}
	free(tmp);
	return (0);
}

//possible leak ligne 52
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
	sc->data = (char **)malloc(sizeof(char *) * (sc->map_height + 1));
	if (sc->data != NULL)
	{
		sc->data[sc->map_height] = NULL;
		while (i < sc->map_height)
		{
			sc->data[i] = get_next_line_b(fd);
			ft_printf("Map : %s", sc->data[i]);
			i++;
		}
	}
	close(fd);
	return (sc->data == NULL);
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
