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

// encore a revoir
int map_is_valid(char *file)
{
	int len;

	len = (int)ft_strlen(file);
	return (len  > 5 && ft_strcmp(file + len  - 5, ".ber"));
}

int	manage_fd(char *av)
{
	int		i;
	int		fd;
	char	*output;

	i = 0;
	fd = open(av, O_RDONLY);
	output = get_next_line(fd);
	if (fd == -1)
		return (0);
	while (output[i++])
		printf("%c", output[i]);
	return (0);
}

