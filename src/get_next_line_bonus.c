/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillarr <mvillarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 12:35:25 by mvillarr          #+#    #+#             */
/*   Updated: 2023/06/29 15:30:01 by mvillarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

static char	*check_and_return(char **s, ssize_t n, int fd)
{
	if (n < 0)
		return (NULL);
	if (!n && (!s[fd] || !*s[fd]))
		return (NULL);
	return (return_next_line(&s[fd]));
}

static char	*return_next_line(char **s)
{
	char	*out;
	char	*line;
	size_t	len;

	len = 0;
	out = NULL;
	while ((*s)[len] != '\n' && (*s)[len])
		len++;
	if ((*s)[len] == '\n')
	{
		out = ft_substr(*s, 0, len + 1);
		line = ft_strdup(*s + len + 1);
		free(*s);
		*s = line;
		if (!**s)
		{
			free(*s);
			*s = NULL;
		}
		return (out);
	}
	out = ft_strdup(*s);
	free(*s);
	*s = NULL;
	return (out);
}

char	*get_next_line_b(int fd)
{
	static char	*stash[4096];
	char		*line;
	char		*buffer;
	int			n;

	line = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = calloc((BUFFER_SIZE + 1), sizeof(char ));
	n = read(fd, buffer, BUFFER_SIZE);
	while (n > 0)
	{
		buffer[n] = '\0';
		if (!stash[fd])
			stash[fd] = ft_strdup("");
		line = ft_strjoin(stash[fd], buffer);
		free(stash[fd]);
		stash[fd] = line;
		if (ft_strchr(buffer, '\n'))
			break ;
		n = read(fd, buffer, BUFFER_SIZE);
	}
	free(buffer);
	buffer = NULL;
	return (check_and_return(stash, n, fd));
}
