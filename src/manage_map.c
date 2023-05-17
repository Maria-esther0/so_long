/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillarr <mvillarr@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:18:46 by mvillarr          #+#    #+#             */
/*   Updated: 2023/05/15 15:18:49 by mvillarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	check_map(char *av)
{
	int i;

	i = 0;
	while (!av)
		return (0);
	if (av[i])
		i++;
	i -= 1;
	if (av[i] == 'r' && av[i - 1] == 'e' && av[i - 2] == 'b'
		&& av[i - 3] == '.' )
		return (0);
	return (1);
}

/*
	this function counts the lines of the map which will eventually define
 	its height.
 	it'll open the fd and check if it's a valid formula.
 	it'll read each line of the map till it founds a \0 and will increase the
 	lines variable
 	on every loop, it'll send afterwards the lines variable once the entire
 	file is read.
 */
int get_line(char *map_fd) {
	int fd;
	int lines;
	char *tmp;

	lines = 0;
	fd = open(map_fd, O_RDONLY);
	if (fd == -1) {
		perror("Found Error in file\n");
		exit(EXIT_FAILURE);
	} else {
		tmp = get_next_line(fd);
		while (tmp) {
			free(tmp);
			tmp = get_next_line(fd);
			lines++;
		}
		close(fd);
	}
	return (lines);
}

void	ft_free(char **tab)
{
	size_t	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	tab = NULL;
	return ;
}

/*
	this function sets up dynamic mem of the map while managing a char.
	it reads and stocks the first line of the file on the line variable.
 	it'll loop while it finds something to read (line) and will stock mem
 	for every line.
	it'll copy at each loop the character of line in the box corresponding
 	to the matrix map.
*/

void	mem_set_range_line(int range, int col, int i, t_mlx *game)
{
	char	*line;

	line = get_next_line(game->map.fd);
	while (line)
	{
		game->map.map[range] = ft_calloc(ft_strlen(line) + 1, sizeof(char));
		if (!game->map.map[range])
			return (ft_free(game->map.map));
		while (line[i])
		{
			game->map.map[range][col] = line[i];
			i++;
			col++;
		}
		game->map.map[range++][col] = '\0';
		col = 0;
		i = 0;
		free(line);
		line = get_next_line(game->map.fd);
	}
	game->map.map[range] = NULL;
}

/*
	this function stocks data + allocates the mem using mem_set_range_line and get_nb_line.
	it also stocks the file's name in map_fd.
	it'll allocate memory for a string with calloc and store it in map.map.
	it allows to manage errors if the fd isn't compatible.
	then it'll close the fd with the close function.
*/

void	stock_map(char *map_fd, t_mlx *game)
{
	size_t	col;
	int 	range;
	int 	i;

	col = 0;
	range = 0;
	i = 0;
	game->map.lignes = get_next_line(map_fd);
	if (!game->map.lignes)
		ft_printf("Error: Empty map!\n");
	game->map.fd = open(map_fd, O_RDONLY);
	if (game->map.fd == -1)
	{
		perror("Found Error, can't open file!\n");
		exit(EXIT_FAILURE);
	}
	mem_set_range_line(range, col, i, game);
	close(game->map.fd);
}

void	map_init(t_mlx *params)
{
	params->x = 0;
	params->y = 0;
	//a continuer
}

//char	**read_map(int fd)
//{
//	int		i;
//	char	*str;
//	char	**map;
//
//	i = 0;
//	map = (char **)ft_calloc(sizeof(char), 9999);
//	while(map)
//	{
//		str = get_next_line(fd);
//		if (!str)
//			break;
//		map[i] = str;
//		i++;
//	}
//	map[i] = NULL;
//	return (map);
//}

//int	manage_fd(char *av)
//{
//	int		i;
//	int		fd;
//	char	*output;
//
//	i = 0;
//	fd = open(av, O_RDONLY);
//	output = get_next_line(fd);
//	if (fd == -1)
//		return (0);
//	while (output[i++])
//		printf("%c", output[i]);
//	return (0);
//}
