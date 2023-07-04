/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillarr <mvillarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 12:35:25 by mvillarr          #+#    #+#             */
/*   Updated: 2023/01/07 12:16:59 by mvillarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_next_line(int fd)
{
	static char	*stash[4096];
	char		*line;
	char		*buffer;

	line = NULL;
	buffer = calloc((BUFFER_SIZE + 1), sizeof(char ));
	if (fd < 0 || BUFFER_SIZE <= 0 || fd > 4095 || !buffer)
	{
		free(buffer);
		stash[fd] = NULL;
		buffer = NULL;
		return (NULL);
	}
	stash[fd] = stash_filling(fd, stash[fd], buffer);
	if (stash[fd] == NULL)
		return (NULL);
	if (*stash[fd] == 0)
	{
		free(stash[fd]);
		return (stash[fd] = 0);
	}
	line = extract_line(stash[fd], line);
	stash[fd] = extract_new_stash(stash[fd]);
	return (line);
}

char	*stash_filling(int fd, char *stash, char *buffer)
{
	ssize_t	n_bytes;

	n_bytes = 1;
	if (!stash)
		stash = ft_strdup("");
	while (n_bytes > 0)
	{
		n_bytes = read(fd, buffer, BUFFER_SIZE);
		if (n_bytes == -1)
		{
			free(stash);
			free(buffer);
			return (NULL);
		}
		buffer[n_bytes] = 0;
		stash = ft_strjoin(stash, buffer);
		if (ft_strchr(buffer, '\n'))
		{
			break ;
		}
	}
	free(buffer);
	return (stash);
}

char	*extract_new_stash(char *stash)
{
	int		len;
	int		i;
	char	*new_stash;

	if (stash == NULL)
		return (NULL);
	len = 0;
	while (stash[len] != '\n' && stash[len] != '\0')
		++len;
	if (stash[len] == '\n')
		++len;
	new_stash = malloc((ft_strlen(stash) - len + 1) * sizeof(char));
	if (!new_stash)
		return (NULL);
	new_stash[ft_strlen(stash) - len] = 0;
	i = 0;
	while (stash[len + i])
	{
		new_stash[i] = stash[len + i];
		i++;
	}
	free (stash);
	return (new_stash);
}

char	*extract_line(char *stash, char *line)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	if (stash == NULL)
		return (NULL);
	while (stash[len] != '\n' && stash[len])
		len++;
	if (stash[len] == '\n')
		len++;
	line = malloc ((len + 1) * sizeof(char));
	if (!line)
		return (NULL);
	while (i < len)
	{
		line[i] = stash[i];
		i++;
	}
	line[i] = 0;
	return (line);
}
